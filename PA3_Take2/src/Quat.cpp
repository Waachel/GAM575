//-----------------------------------------------------------------------------
// Copyright 2023, Ed Keenan, all rights reserved.
//----------------------------------------------------------------------------- 

#include "MathEngine.h"
#include "Quat.h"

namespace Azul
{

	// Do your magic here

	Azul::Quat::Quat(void)
	{
		this->_qx = 0;
		this->_qy = 0;
		this->_qz = 0;
		this->_qw = 1;
	}

	Quat::Quat(const Quat& qIn)
	{
		_qx = qIn._qx;
		_qy = qIn._qy;
		_qz = qIn._qz;
		_qw = qIn._qw;
	}

	Quat::Quat(const Vec3& vect, const float real)
	{
		_qx = vect.x();
		_qy = vect.y();
		_qz = vect.z();
		_qw = real;
	}

	Quat::Quat(const float vx, const float vy, const float vz, const float real)
	{
		this->_qx = vx;
		this->_qy = vy;
		this->_qz = vz;
		this->_qw = real;
	}

	Quat::Quat(const Rot& mIn)
	{
		float tr = mIn.m0() + mIn.m5() + mIn.m10();
		float S;
		if (tr > 0.0f)
		{
			S = 2 * sqrtf(tr + 1.0f);
			this->_qw = 0.25f * S;
			this->_qx = -(mIn.m9() - mIn.m6()) / S;
			this->_qy = -(mIn.m2() - mIn.m8()) / S;
			this->_qz = -(mIn.m4() - mIn.m1()) / S;
		}
		else if ((mIn.m0() > mIn.m5()) && (mIn.m0() > mIn.m10()))
		{
			S = 2 * sqrtf(1.0f + mIn.m0() - mIn.m5() - mIn.m10());
			this->_qw = -(mIn.m9() - mIn.m6()) / S;
			this->_qx = 0.25f * S;
			this->_qy = (mIn.m1() + mIn.m4()) / S;
			this->_qz = (mIn.m2() + mIn.m8()) / S;
		}
		else if (mIn.m5() > mIn.m10())
		{
			S = 2 * sqrtf(1.0f + mIn.m5() - mIn.m0() - mIn.m10());
			this->_qw = -(mIn.m2() - mIn.m8()) / S;
			this->_qx = (mIn.m1() + mIn.m4()) / S;
			this->_qy = 0.25f * S;
			this->_qz = (mIn.m6() + mIn.m9()) / S;
		}
		else
		{
			S = 2 * sqrtf(1.0f + mIn.m10() - mIn.m0() - mIn.m5());
			this->_qw = -(mIn.m4() - mIn.m1()) / S;
			this->_qx = (mIn.m2() + mIn.m8()) / S;
			this->_qy = (mIn.m6() + mIn.m9()) / S;
			this->_qz = 0.25f * S;
		}

	}

	Quat::Quat(const Special value)
	{
		if (value == Special::Identity)
		{
			this->_qx = 0;
			this->_qy = 0;
			this->_qz = 0;
			this->_qw = 1;
		}

		//zero
		else
		{
			this->_qx = 0;
			this->_qy = 0;
			this->_qz = 0;
			this->_qw = 0;
		}
	}

	Quat::Quat(const Rot1 type, const float angle)
	{
		if (type == Rot1::X)
		{
			this->_qx = sin(angle/2.0f);
			this->_qy = 0;
			this->_qz = 0;
			this->_qw = cos(angle/2.0f);
		}

		else if (type == Rot1::Y)
		{
			this->_qx = 0;
			this->_qy = sin(angle / 2.0f);
			this->_qz = 0;
			this->_qw = cos(angle / 2.0f);
		}

		//Rot1::Z
		else
		{
			this->_qx = 0;
			this->_qy = 0;
			this->_qz = sin(angle / 2.0f);
			this->_qw = cos(angle / 2.0f);
		}
	}

	Quat::Quat(const Rot3 type, const float angle_x, const float angle_y, const float angle_z)
	{
		if (type == Rot3::XYZ)
		{
			//qx * qy * qz;
			*this = Quat(Rot1::X, angle_x) * Quat(Rot1::Y, angle_y) * Quat(Rot1::Z, angle_z);
		}

		else if (type == Rot3::XZY)
		{
			//qx * qz * qy;
			*this = Quat(Rot1::X, angle_x) * Quat(Rot1::Z, angle_z) * Quat(Rot1::Y, angle_y);
		}

		else if (type == Rot3::YXZ)
		{
			//qy * qx * qz;
			*this = Quat(Rot1::Y, angle_y) * Quat(Rot1::X, angle_x) * Quat(Rot1::Z, angle_z);
		}

		else if (type == Rot3::YZX)
		{
			//qy * qz * qx;
			*this = Quat(Rot1::Y, angle_y) * Quat(Rot1::Z, angle_z) * Quat(Rot1::X, angle_x);
		}

		else if (type == Rot3::ZXY)
		{
			//qz * qx * qy;
			*this = Quat(Rot1::Z, angle_z) * Quat(Rot1::X, angle_x) * Quat(Rot1::Y, angle_y);
		}

		else //if (type == Rot3::ZYX)
		{
			//qz * qy * qx;
			*this = Quat(Rot1::Z, angle_z) * Quat(Rot1::Y, angle_y) * Quat(Rot1::X, angle_x);
		}
	}
	
	Quat::Quat(const Axis type, const Vec3& vAxis, const float angle_radians)
	{
		if (type == Axis::AxisAngle)
		{
			Vec3 norm = vAxis.getNorm();
			this->_qx = norm.x() * (sin(angle_radians/2));
			this->_qy = norm.y() * (sin(angle_radians / 2));
			this->_qz = norm.z() * (sin(angle_radians / 2));
			this->_qw = (cos(angle_radians / 2));
		}

		else //if (type == Axis::UnitAxisAngle)
		{

		}
	}
	
	Quat::Quat(const Orient, const Vec3& dof, const Vec3& up)
	{
		AZUL_REPLACE_ME(dof);
		AZUL_REPLACE_ME(up);
	}

	Quat::~Quat(void)
	{
	}

	void Quat::set(const Special type)
	{
		if (type == Special::Identity)
		{
			_qx = 0.0f;
			_qy = 0.0f;
			_qz = 0.0f;
			_qw = 1.0f;

		}

		//Zero
		else
		{
			_qx = 0.0f;
			_qy = 0.0f;
			_qz = 0.0f;
			_qw = 0.0f;
		}
	}

	void Quat::set(const Rot1 type, const float angle)
	{
		if (type == Rot1::X)
		{
			this->_qx = sin(angle / 2.0f);
			this->_qy = 0;
			this->_qz = 0;
			this->_qw = cos(angle / 2.0f);
		}

		else if (type == Rot1::Y)
		{
			this->_qx = 0;
			this->_qy = sin(angle / 2.0f);
			this->_qz = 0;
			this->_qw = cos(angle / 2.0f);
		}

		//Rot1::Z
		else
		{
			this->_qx = 0;
			this->_qy = 0;
			this->_qz = sin(angle / 2.0f);
			this->_qw = cos(angle / 2.0f);
		}
	}

	void Quat::set(const Rot3 type, const float angle_x, const float angle_y, const float angle_z)
	{
		if (type == Rot3::XYZ)
		{
			//qx * qy * qz;
			*this = Quat(Rot1::X, angle_x) * Quat(Rot1::Y, angle_y) * Quat(Rot1::Z, angle_z);
		}

		else if (type == Rot3::XZY)
		{
			//qx * qz * qy;
			*this = Quat(Rot1::X, angle_x) * Quat(Rot1::Z, angle_z) * Quat(Rot1::Y, angle_y);
		}

		else if (type == Rot3::YXZ)
		{
			//qy * qx * qz;
			*this = Quat(Rot1::Y, angle_y) * Quat(Rot1::X, angle_x) * Quat(Rot1::Z, angle_z);
		}

		else if (type == Rot3::YZX)
		{
			//qy * qz * qx;
			*this = Quat(Rot1::Y, angle_y) * Quat(Rot1::Z, angle_z) * Quat(Rot1::X, angle_x);
		}

		else if (type == Rot3::ZXY)
		{
			//qz * qx * qy;
			*this = Quat(Rot1::Z, angle_z) * Quat(Rot1::X, angle_x) * Quat(Rot1::Y, angle_y);
		}

		else //if (type == Rot3::ZYX)
		{
			//qz * qy * qx;
			*this = Quat(Rot1::Z, angle_z) * Quat(Rot1::Y, angle_y) * Quat(Rot1::X, angle_x);
		}

	}

	void Quat::set(const Axis type, const Vec3& vAxis, const float angle_radians)
	{
		if (type == Axis::AxisAngle)
		{
			Vec3 norm = vAxis.getNorm();
			this->_qx = norm.x() * (sin(angle_radians / 2));
			this->_qy = norm.y() * (sin(angle_radians / 2));
			this->_qz = norm.z() * (sin(angle_radians / 2));
			this->_qw = (cos(angle_radians / 2));
		}

		else //if (type == Axis::UnitAxisAngle)
		{

		}
	}

	void Quat::set(const Orient o, const Vec3& dof, const Vec3& up)
	{
		AZUL_REPLACE_ME(o);
		AZUL_REPLACE_ME(dof);
		AZUL_REPLACE_ME(up);
	}

	void Quat::set(const float vx, const float vy, const float vz, const float real)
	{
		this->_qx = vx;
		this->_qy = vy;
		this->_qz = vz;
		this->_qw = real;
	}

	float& Quat::operator[](const x_enum value)
	{
		AZUL_REPLACE_ME(value);
		return this->_qx;
	}

	float& Quat::operator[](const y_enum value)
	{
		AZUL_REPLACE_ME(value);
		return this->_qy;
	}

	float& Quat::operator[](const z_enum value)
	{
		AZUL_REPLACE_ME(value);
		return this->_qz;
	}

	float& Quat::operator[](const w_enum value)
	{
		AZUL_REPLACE_ME(value);
		return this->_qw;
	}

	void Quat::qx(const float v)
	{
		this->_qx = v;
	}

	void Quat::qy(const float v)
	{
		this->_qy = v;
	}

	void Quat::qz(const float v)
	{
		this->_qz = v;
	}

	void Quat::real(const float v)
	{
		this->_qw = v;
	}

	void Quat::setVec3(const Vec3& vect)
	{
		_qx = vect.x();
		_qy = vect.y();
		_qz = vect.z();
	}

	void Quat::set(const Vec3& vect, const float real)
	{
		_qx = vect.x();
		_qy = vect.y();
		_qz = vect.z();
		_qw = real;

	}

	void Quat::set(const Rot& m)
	{
		float tr = m.m0() + m.m5() + m.m10();
		float S;
		if (tr > 0.0f)
		{
			S = 2 * sqrtf(tr + 1.0f);
			this->_qw = 0.25f * S;
			this->_qx = -(m.m9() - m.m6()) / S;
			this->_qy = -(m.m2() - m.m8()) / S;
			this->_qz = -(m.m4() - m.m1()) / S;
		}
		else if((m.m0() > m.m5()) && (m.m0() > m.m10()))
		{
			S = 2 * sqrtf(1.0f + m.m0() - m.m5() - m.m10());
			this->_qw = -(m.m9() - m.m6()) / S;
			this->_qx = 0.25f * S;
			this->_qy = (m.m1() + m.m4()) / S;
			this->_qz = (m.m2() + m.m8()) / S;
		}
		else if(m.m5() > m.m10())
		{
			S = 2 * sqrtf(1.0f + m.m5() - m.m0() - m.m10());
			this->_qw = -(m.m2() - m.m8()) / S;
			this->_qx = (m.m1() + m.m4()) / S;
			this->_qy = 0.25f * S;
			this->_qz = (m.m6() + m.m9()) / S;
		}
		else
		{
			S = 2 * sqrtf(1.0f + m.m10() - m.m0() - m.m5());
			this->_qw = -(m.m4() - m.m1()) / S;
			this->_qx = (m.m2() + m.m8()) / S;
			this->_qy = (m.m6() + m.m9()) / S;
			this->_qz = 0.25f * S;
		}
		
	}

	float Quat::operator[](const x_enum value) const
	{
		AZUL_REPLACE_ME(value);
		return this->_qx;
	}

	float Quat::operator[](const y_enum value) const
	{
		AZUL_REPLACE_ME(value);
		return this->_qy;
	}

	float Quat::operator[](const z_enum value) const
	{
		AZUL_REPLACE_ME(value);
		return this->_qz;
	}

	float Quat::operator[](const w_enum value) const
	{
		AZUL_REPLACE_ME(value);
		return this->_qw;
	}

	float Quat::qx() const
	{
		return this->_qx;
	}

	float Quat::qy() const
	{
		return this->_qy;
	}

	float Quat::qz() const
	{
		return this->_qz;
	}

	float Quat::real() const
	{
		return this->_qw;
	}

	float Quat::getAngle(void) const
	{
		float angle = 2 * (Trig::acos(this->real()));

		return angle;
	}

	void Quat::getVec3(Vec3& vOut) const
	{
		vOut[x] = this->_qx;
		vOut[y] = this->_qy;
		vOut[z] = this->_qz;
	}

	void Quat::getAxis(Vec3& vOut) const
	{
		Quat norm = this->getNorm();
		vOut[x] = norm._qx * 2;
		vOut[y] = norm._qy * 2;
		vOut[z] = norm._qz * 2;
	}

	float Quat::dot(const Quat& qin) const
	{
		return this->_qw * qin.real() + this->_qx * qin.qx() + this->_qy * qin.qy() + this->_qz * qin.qz();
	}

	float Quat::mag(void) const
	{
		return Trig::sqrt(this->_qw * this->_qw + this->_qx * this->_qx + this->_qy * this->_qy + this->_qz * this->_qz);
	}

	float Quat::magSquared(void) const
	{
		return  mag() * mag();
	}

	float Quat::invMag(void) const
	{
		return  Trig::rsqrt(this->_qw * this->_qw + this->_qx * this->_qx + this->_qy * this->_qy + this->_qz * this->_qz);
	}

	Quat& Quat::conj(void)
	{
		// TODO: insert return statement here
		this->_qx = -this->_qx;
		this->_qy = -this->_qy;
		this->_qz = -this->_qz;
		return *this;
	}

	Quat Quat::getConj(void) const
	{
		Quat tmp;
		tmp._qx = -_qx;
		tmp._qy = -_qy;
		tmp._qz = -_qz;
		tmp._qw = _qw;

		return tmp;
	}

	Quat& Quat::inv(void)
	{
		// TODO: insert return statement here
		this->_qx = -this->_qx;
		this->_qy = -this->_qy;
		this->_qz = -this->_qz;
		return *this;
	}

	Quat Quat::getInv(void) const
	{
		return Quat(-this->_qx, -this->_qy,-this->_qz, this->_qw);
	}

	Quat& Quat::norm(void)
	{
		float len = mag();
		if (len > 0.0f)
		{
			float norm = 1.0f / len;
			this->_qx = this->_qx * norm;
			this->_qy = this->_qy * norm;
			this->_qz = this->_qz * norm;
			this->_qw = this->_qw * norm;
		}
		return *this;
	}

	Quat Quat::getNorm(void) const
	{
		Quat norm = *this;
		norm.norm();
		return norm;
	}

	bool Quat::isEqual(const Quat& qin, const float epsilon) const
	{
		return (abs(this->_qx - qin.qx()) < epsilon) &&
			(abs(this->_qy - qin.qy()) < epsilon) &&
			(abs(this->_qz - qin.qz()) < epsilon) &&
			(abs(this->_qw - qin.real()) < epsilon);
	}

	bool Quat::isEquivalent(const Quat& qin, const float epsilon) const
	{
		return ((abs(this->_qx + this->_qy + this->_qz + this->_qw) -
			abs(qin.qx() + qin.qy() + qin.qz() + qin.real())) < epsilon);
	}

	bool Quat::isNegEqual(const Quat& qin, const float epsilon) const
	{
		return (abs(this->_qx + qin.qx()) < epsilon) &&
			(abs(this->_qy + qin.qy()) < epsilon) &&
			(abs(this->_qz + qin.qz()) < epsilon) &&
			(abs(this->_qw + qin.real()) < epsilon);
	}

	bool Quat::isConjugateEqual(const Quat& qin, const float epsilon) const
	{
		// -x, -y, -z, +w
		//	q1.set(1.0f,2.0f,3.0f,4.0f);
		//  q2.set(-1.0f, -2.0f, -3.05f, 4.0f);

		return (abs(this->_qx + qin.qx()) < epsilon) &&
			(abs(this->_qy + qin.qy()) < epsilon) &&
			(abs(this->_qz + qin.qz()) < epsilon) &&
			(abs(this->_qw - qin.real()) < epsilon);
	}

	bool Quat::isIdentity(const float epsilon) const
	{
		return (abs(this->_qx - 0) < epsilon) &&
			(abs(this->_qy - 0) < epsilon) &&
			(abs(this->_qz - 0) < epsilon) &&
			(abs(this->_qw - 1) < epsilon);
	}

	bool Quat::isNormalized(const float epsilon) const
	{
		float len = mag();
		return (abs(len - 1) < epsilon);
	}


	bool Quat::isZero(const float epsilon) const
	{
		return (abs(this->_qx - 0) < epsilon) &&
			(abs(this->_qy - 0) < epsilon) &&
			(abs(this->_qz - 0) < epsilon) &&
			(abs(this->_qw - 0) < epsilon);
	}

	Quat& Quat::operator=(const Quat& q)
	{
		_qx = q._qx;
		_qy = q._qy;
		_qz = q._qz;
		_qw = q._qw;

		return *this;
	}

	Quat& Quat::operator=(const Rot& m)
	{
		float tr = m.m0() + m.m5() + m.m10();
		float S;
		if (tr > 0.0f)
		{
			S = 2 * sqrtf(tr + 1.0f);
			this->_qw = 0.25f * S;
			this->_qx = -(m.m9() - m.m6()) / S;
			this->_qy = -(m.m2() - m.m8()) / S;
			this->_qz = -(m.m4() - m.m1()) / S;
		}
		else if ((m.m0() > m.m5()) && (m.m0() > m.m10()))
		{
			S = 2 * sqrtf(1.0f + m.m0() - m.m5() - m.m10());
			this->_qw = -(m.m9() - m.m6()) / S;
			this->_qx = 0.25f * S;
			this->_qy = (m.m1() + m.m4()) / S;
			this->_qz = (m.m2() + m.m8()) / S;
		}
		else if (m.m5() > m.m10())
		{
			S = 2 * sqrtf(1.0f + m.m5() - m.m0() - m.m10());
			this->_qw = -(m.m2() - m.m8()) / S;
			this->_qx = (m.m1() + m.m4()) / S;
			this->_qy = 0.25f * S;
			this->_qz = (m.m6() + m.m9()) / S;
		}
		else
		{
			S = 2 * sqrtf(1.0f + m.m10() - m.m0() - m.m5());
			this->_qw = -(m.m4() - m.m1()) / S;
			this->_qx = (m.m2() + m.m8()) / S;
			this->_qy = (m.m6() + m.m9()) / S;
			this->_qz = 0.25f * S;
		}
		return *this;
	}

	Quat& Quat::operator=(const Mat4& m)
	{
		float tr = m.m0() + m.m5() + m.m10();
		float S;
		if (tr > 0.0f)
		{
			S = 2 * sqrtf(tr + 1.0f);
			this->_qw = 0.25f * S;
			this->_qx = -(m.m9() - m.m6()) / S;
			this->_qy = -(m.m2() - m.m8()) / S;
			this->_qz = -(m.m4() - m.m1()) / S;
		}
		else if ((m.m0() > m.m5()) && (m.m0() > m.m10()))
		{
			S = 2 * sqrtf(1.0f + m.m0() - m.m5() - m.m10());
			this->_qw = -(m.m9() - m.m6()) / S;
			this->_qx = 0.25f * S;
			this->_qy = (m.m1() + m.m4()) / S;
			this->_qz = (m.m2() + m.m8()) / S;
		}
		else if (m.m5() > m.m10())
		{
			S = 2 * sqrtf(1.0f + m.m5() - m.m0() - m.m10());
			this->_qw = -(m.m2() - m.m8()) / S;
			this->_qx = (m.m1() + m.m4()) / S;
			this->_qy = 0.25f * S;
			this->_qz = (m.m6() + m.m9()) / S;
		}
		else
		{
			S = 2 * sqrtf(1.0f + m.m10() - m.m0() - m.m5());
			this->_qw = -(m.m4() - m.m1()) / S;
			this->_qx = (m.m2() + m.m8()) / S;
			this->_qy = (m.m6() + m.m9()) / S;
			this->_qz = 0.25f * S;
		}
		return *this;
	}

	Quat Quat::operator+(void) const
	{
		return Quat(_qx, _qy, _qz, _qw);
	}

	Quat Quat::operator+(const Quat& q) const
	{
		return Quat(_qx + q._qx, _qy + q._qy, _qz + q._qz, _qw + q._qw);
	}

	Quat& Quat::operator+=(const Quat& q)
	{
		_qx += q._qx;
		_qy += q._qy;
		_qz += q._qz;
		_qw += q._qw;
		return *this;
	}

	Quat Quat::operator+(const float a) const
	{
		return Quat(_qx + a, _qy + a, _qz + a, _qw + a);
	}

	Quat& Quat::operator+=(const float a)
	{
		_qx += a;
		_qy += a;
		_qz += a;
		_qw += a;
		return *this;
	}

	Quat Quat::operator-(void) const
	{
		return Quat(-_qx, -_qy, -_qz, -_qw);
	}

	Quat Quat::operator-(const Quat& q) const
	{
		return Quat(_qx - q._qx, _qy - q._qy, _qz - q._qz, _qw - q._qw);
	}

	Quat& Quat::operator-=(const Quat& q)
	{
		_qx -= q._qx;
		_qy -= q._qy;
		_qz -= q._qz;
		_qw -= q._qw;

		return *this;
	}

	Quat Quat::operator-(const float a) const
	{
		return Quat(_qx - a, _qy - a, _qz - a, _qw - a);
	}

	Quat& Quat::operator-=(const float a)
	{
		_qx -= a;
		_qy -= a;
		_qz -= a;
		_qw -= a;
		return *this;
	}

	Quat Quat::operator*(const float a) const
	{
		/*?(_qw+_qx+_qy+_qz)*(a._qw+a._qx+a._qy+a._qz)=
		_qw*(a._qw+a._qx+a._qy+a._qz)+
		_qx*(a._qw+a._qx+a._qy+a._qz)+
		_qy*(a._qw+a._qx+a._qy+a._qz)+
		_qz*(a._qw+a._qx+a._qy+a._qz)?*/
		return Quat(_qx * a, _qy * a, _qz * a, _qw * a);
	}

	Quat& Quat::operator*=(const float a)
	{
		_qx *= a;
		_qy *= a;
		_qz *= a;
		_qw *= a;
		return *this;
	}

	Mat4 Quat::operator*(const Mat4& m) const
	{
		AZUL_REPLACE_ME(m);
		return Mat4();
	}

	Quat Quat::operator*(const Quat& q) const
	{
		/*?(_qw+_qx+_qy+_qz)*(a._qw+a._qx+a._qy+a._qz)=
		_qw*(a._qw+a._qx+a._qy+a._qz)+
		_qx*(a._qw+a._qx+a._qy+a._qz)+
		_qy*(a._qw+a._qx+a._qy+a._qz)+
		_qz*(a._qw+a._qx+a._qy+a._qz)?*/

		return Quat(q._qx * _qw + q._qw * _qx + q._qy * _qz - q._qz * _qy,
			q._qw * _qy - q._qx * _qz + q._qy * _qw + q._qz * _qx,
			q._qw * _qz + q._qx * _qy - q._qy * _qx + q._qz * _qw,
			q._qw * _qw - q._qx * _qx - q._qy * _qy - q._qz * _qz);
	}

	Quat& Quat::operator*=(const Quat& q)
	{
		Quat tmp;

		//(b*e + a*f + c*h- d*g)
		tmp._qx = q._qx * _qw + q._qw * _qx + q._qy * _qz - q._qz * _qy;

		//(a*g - b*h+ c*e + d*f)
		tmp._qy = q._qw * _qy - q._qx * _qz + q._qy * _qw + q._qz * _qx;

		//(a*h + b*g - c*f + d*e)
		tmp._qz = q._qw * _qz + q._qx * _qy - q._qy * _qx + q._qz * _qw;

		//a*e - b*f - c*g - d*h
		tmp._qw = q._qw * _qw - q._qx * _qx - q._qy * _qy - q._qz * _qz;

		_qx = tmp._qx;
		_qy = tmp._qy;
		_qz = tmp._qz;
		_qw = tmp._qw;
		return *this;

	}

	Mat4 Quat::operator*(const Scale& m) const
	{
		AZUL_REPLACE_ME(m);
		return Mat4();
	}

	Quat& Quat::operator*=(const Rot& m)
	{
		Quat tmp;
		Mat4 r(tmp);
		*this = r * m;
		return *this;
	}

	Rot Quat::operator*(const Rot& m) const
	{
		Mat4 r(*this);
		Mat4 mult = r * m;
		return (Rot)mult;
	}

	Mat4 Quat::operator*(const Trans& m) const
	{
		AZUL_REPLACE_ME(m);
		return Mat4();
	}

	Quat Quat::operator/(const Quat& q) const
	{
		AZUL_REPLACE_ME(q);
		return Quat();
	}

	Quat& Quat::operator/=(const Quat& q)
	{
		AZUL_REPLACE_ME(q);
		// TODO: insert return statement here
		return *this;
	}

	Quat Quat::operator/(const float a) const
	{
		AZUL_REPLACE_ME(a);
		return Quat();
	}

	Quat& Quat::operator/=(const float a)
	{
		AZUL_REPLACE_ME(a);
		// TODO: insert return statement here
		return *this;
	}



	Quat operator+(const float a, const Quat& q)
	{
		return Quat(q._qx + a, q._qy + a, q._qz + a, q._qw + a);
	}

	Quat operator-(const float a, const Quat& q)
	{
		return Quat(a - q._qx, a - q._qy, a - q._qz, a - q._qw);
	}

	Quat operator*(const float a, const Quat& q)
	{
		return Quat(q._qx * a, q._qy * a, q._qz * a, q._qw * a);
	}

	Quat operator/(const float a, const Quat& q)
	{
		return Quat(a / q._qx, a / q._qy, a / q._qz, a / q._qw);
	}

}

//--- End of File ---