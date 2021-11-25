// File: unknown/unknown.cpp
#include <iostream> // --trace
#include <iterator> // __gnu_cxx::__normal_iterator
#include <memory> // std::allocator
#include <string> // std::basic_string
#include <string> // std::char_traits

#include <pybind11/pybind11.h>
#include <functional>
#include <string>
#include <pybind11/stl.h>
#include <pybind11/stl_bind.h>
#include <pybind11/functional.h>
#include <fstream>
#include "viewer.hpp"
#include <osgDB/ReadFile>
#include <osg/ComputeBoundsVisitor>
#include <osg/LineWidth>
#include <osg/Point>
#include <osg/BlendFunc>
#include <osg/BlendColor>
#include <osg/Geode>
#include <osg/Group>
#include <osg/ShapeDrawable>
#include <osg/CullFace>
#include <osgGA/StateSetManipulator>
#include <osgGA/TrackballManipulator>
#include <osgGA/KeySwitchMatrixManipulator>
#include <osgGA/FlightManipulator>
#include <osgGA/DriveManipulator>
#include <osgGA/TerrainManipulator>
#include <osgGA/SphericalManipulator>
#include <osgViewer/ViewerEventHandlers>
#include <osgDB/Registry>
#include <osgShadow/StandardShadowMap>
#include <osgShadow/ShadowMap>
#include <osgShadow/ShadowedScene>
#include <osgUtil/SmoothingVisitor>
#include "CommonMini.hpp"
#include "RubberbandManipulator.hpp"
#include "IdealSensor.hpp"
#include "RoadManager.hpp"
#include "CommonMini.hpp"
#include "roadgeom.hpp"


#ifndef BINDER_PYBIND11_TYPE_CASTER
	#define BINDER_PYBIND11_TYPE_CASTER
	PYBIND11_DECLARE_HOLDER_TYPE(T, std::shared_ptr<T>)
	PYBIND11_DECLARE_HOLDER_TYPE(T, T*)
	PYBIND11_MAKE_OPAQUE(std::shared_ptr<void>)
#endif

void bind_unknown_unknown(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	std::cout << "B0_[ControlDomains] ";
	// ControlDomains file: line:79
	pybind11::enum_<ControlDomains>(M(""), "ControlDomains", "")
		.value("DOMAIN_NONE", ControlDomains::DOMAIN_NONE)
		.value("DOMAIN_LONG", ControlDomains::DOMAIN_LONG)
		.value("DOMAIN_LAT", ControlDomains::DOMAIN_LAT)
		.value("DOMAIN_BOTH", ControlDomains::DOMAIN_BOTH);

;

	std::cout << "B1_[class std::__cxx11::basic_string<char> ControlDomain2Str(enum ControlDomains)] ";
	std::cout << "B2_[bool FileExists(const char *)] ";
	std::cout << "B3_[class std::__cxx11::basic_string<char> CombineDirectoryPathAndFilepath(std::string, std::string)] ";
	std::cout << "B4_[double GetAngleOfVector(double, double)] ";
	std::cout << "B5_[double GetAbsAngleDifference(double, double)] ";
	std::cout << "B6_[double GetAngleSum(double, double)] ";
	std::cout << "B7_[double GetAngleInInterval2PI(double)] ";
	std::cout << "B8_[double GetAngleDifference(double, double)] ";
	std::cout << "B9_[bool IsAngleStraight(double)] ";
	std::cout << "B10_[double GetCrossProduct2D(double, double, double, double)] ";
	std::cout << "B11_[double GetDotProduct2D(double, double, double, double)] ";
	std::cout << "B12_[int GetIntersectionOfTwoLineSegments(double, double, double, double, double, double, double, double, double &, double &)] ";
	std::cout << "B13_[double PointDistance2D(double, double, double, double)] ";
	std::cout << "B14_[double PointToLineDistance2DSigned(double, double, double, double, double, double)] ";
	std::cout << "B15_[double PointSquareDistance2D(double, double, double, double)] ";
	std::cout << "B16_[void ProjectPointOnVector2D(double, double, double, double, double, double, double &, double &)] ";
	std::cout << "B17_[bool PointInBetweenVectorEndpoints(double, double, double, double, double, double, double &)] ";
	std::cout << "B18_[double DistanceFromPointToEdge2D(double, double, double, double, double, double, double *, double *)] ";
	std::cout << "B19_[int PointSideOfVec(double, double, double, double, double, double)] ";
	std::cout << "B20_[double GetLengthOfLine2D(double, double, double, double)] ";
	std::cout << "B21_[double GetLengthOfVector3D(double, double, double)] ";
	std::cout << "B22_[void RotateVec2D(double, double, double, double &, double &)] ";
	std::cout << "B23_[void Global2LocalCoordinates(double, double, double, double, double, double &, double &)] ";
	std::cout << "B24_[void Local2GlobalCoordinates(double &, double &, double, double, double, double, double)] ";
	std::cout << "B25_[void NormalizeVec2D(double, double, double &, double &)] ";
	std::cout << "B26_[void OffsetVec2D(double, double, double, double, double, double &, double &, double &, double &)] ";
	std::cout << "B27_[void ZYZ2EulerAngles(double, double, double, double &, double &, double &)] ";
	std::cout << "B28_[void R0R12EulerAngles(double, double, double, double, double, double, double &, double &, double &)] ";
	std::cout << "B29_[void SwapByteOrder(unsigned char *, int, int)] ";
}


// File: unknown/unknown_1.cpp
#include <iostream> // --trace
#include <iterator> // __gnu_cxx::__normal_iterator
#include <memory> // std::allocator
#include <sstream> // __str__
#include <string> // std::basic_string
#include <string> // std::char_traits

#include <pybind11/pybind11.h>
#include <functional>
#include <string>
#include <pybind11/stl.h>
#include <pybind11/stl_bind.h>
#include <pybind11/functional.h>
#include <fstream>
#include "viewer.hpp"
#include <osgDB/ReadFile>
#include <osg/ComputeBoundsVisitor>
#include <osg/LineWidth>
#include <osg/Point>
#include <osg/BlendFunc>
#include <osg/BlendColor>
#include <osg/Geode>
#include <osg/Group>
#include <osg/ShapeDrawable>
#include <osg/CullFace>
#include <osgGA/StateSetManipulator>
#include <osgGA/TrackballManipulator>
#include <osgGA/KeySwitchMatrixManipulator>
#include <osgGA/FlightManipulator>
#include <osgGA/DriveManipulator>
#include <osgGA/TerrainManipulator>
#include <osgGA/SphericalManipulator>
#include <osgViewer/ViewerEventHandlers>
#include <osgDB/Registry>
#include <osgShadow/StandardShadowMap>
#include <osgShadow/ShadowMap>
#include <osgShadow/ShadowedScene>
#include <osgUtil/SmoothingVisitor>
#include "CommonMini.hpp"
#include "RubberbandManipulator.hpp"
#include "IdealSensor.hpp"
#include "RoadManager.hpp"
#include "CommonMini.hpp"
#include "roadgeom.hpp"


#ifndef BINDER_PYBIND11_TYPE_CASTER
	#define BINDER_PYBIND11_TYPE_CASTER
	PYBIND11_DECLARE_HOLDER_TYPE(T, std::shared_ptr<T>)
	PYBIND11_DECLARE_HOLDER_TYPE(T, T*)
	PYBIND11_MAKE_OPAQUE(std::shared_ptr<void>)
#endif

void bind_unknown_unknown_1(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	std::cout << "B30_[scenarioengine::OSCProperties] ";
	{ // scenarioengine::OSCProperties file: line:21
		pybind11::class_<scenarioengine::OSCProperties, std::shared_ptr<scenarioengine::OSCProperties>> cl(M("scenarioengine"), "OSCProperties", "");
		cl.def( pybind11::init( [](){ return new scenarioengine::OSCProperties(); } ) );
		cl.def( pybind11::init( [](scenarioengine::OSCProperties const &o){ return new scenarioengine::OSCProperties(o); } ) );
		cl.def_readwrite("property_", &scenarioengine::OSCProperties::property_);
		cl.def_readwrite("file_", &scenarioengine::OSCProperties::file_);

		{ // scenarioengine::OSCProperties::Property file: line:24
			auto & enclosing_class = cl;
			pybind11::class_<scenarioengine::OSCProperties::Property, std::shared_ptr<scenarioengine::OSCProperties::Property>> cl(enclosing_class, "Property", "");
			cl.def( pybind11::init( [](){ return new scenarioengine::OSCProperties::Property(); } ) );
			cl.def( pybind11::init( [](scenarioengine::OSCProperties::Property const &o){ return new scenarioengine::OSCProperties::Property(o); } ) );
			cl.def_readwrite("name_", &scenarioengine::OSCProperties::Property::name_);
			cl.def_readwrite("value_", &scenarioengine::OSCProperties::Property::value_);
		}

		{ // scenarioengine::OSCProperties::File file: line:31
			auto & enclosing_class = cl;
			pybind11::class_<scenarioengine::OSCProperties::File, std::shared_ptr<scenarioengine::OSCProperties::File>> cl(enclosing_class, "File", "");
			cl.def( pybind11::init( [](){ return new scenarioengine::OSCProperties::File(); } ) );
			cl.def( pybind11::init( [](scenarioengine::OSCProperties::File const &o){ return new scenarioengine::OSCProperties::File(o); } ) );
			cl.def_readwrite("filepath_", &scenarioengine::OSCProperties::File::filepath_);
			cl.def("assign", (class scenarioengine::OSCProperties::File & (scenarioengine::OSCProperties::File::*)(const class scenarioengine::OSCProperties::File &)) &scenarioengine::OSCProperties::File::operator=, "C++: scenarioengine::OSCProperties::File::operator=(const class scenarioengine::OSCProperties::File &) --> class scenarioengine::OSCProperties::File &", pybind11::return_value_policy::automatic, pybind11::arg(""));
		}

	}
}


// File: unknown/unknown_2.cpp
#include <iostream> // --trace
#include <sstream> // __str__

#include <pybind11/pybind11.h>
#include <functional>
#include <string>
#include <pybind11/stl.h>
#include <pybind11/stl_bind.h>
#include <pybind11/functional.h>
#include <fstream>
#include "viewer.hpp"
#include <osgDB/ReadFile>
#include <osg/ComputeBoundsVisitor>
#include <osg/LineWidth>
#include <osg/Point>
#include <osg/BlendFunc>
#include <osg/BlendColor>
#include <osg/Geode>
#include <osg/Group>
#include <osg/ShapeDrawable>
#include <osg/CullFace>
#include <osgGA/StateSetManipulator>
#include <osgGA/TrackballManipulator>
#include <osgGA/KeySwitchMatrixManipulator>
#include <osgGA/FlightManipulator>
#include <osgGA/DriveManipulator>
#include <osgGA/TerrainManipulator>
#include <osgGA/SphericalManipulator>
#include <osgViewer/ViewerEventHandlers>
#include <osgDB/Registry>
#include <osgShadow/StandardShadowMap>
#include <osgShadow/ShadowMap>
#include <osgShadow/ShadowedScene>
#include <osgUtil/SmoothingVisitor>
#include "CommonMini.hpp"
#include "RubberbandManipulator.hpp"
#include "IdealSensor.hpp"
#include "RoadManager.hpp"
#include "CommonMini.hpp"
#include "roadgeom.hpp"


#ifndef BINDER_PYBIND11_TYPE_CASTER
	#define BINDER_PYBIND11_TYPE_CASTER
	PYBIND11_DECLARE_HOLDER_TYPE(T, std::shared_ptr<T>)
	PYBIND11_DECLARE_HOLDER_TYPE(T, T*)
	PYBIND11_MAKE_OPAQUE(std::shared_ptr<void>)
#endif

void bind_unknown_unknown_2(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	std::cout << "B31_[scenarioengine::OSCParameterDeclarations] ";
	{ // scenarioengine::OSCParameterDeclarations file: line:26
		pybind11::class_<scenarioengine::OSCParameterDeclarations, std::shared_ptr<scenarioengine::OSCParameterDeclarations>> cl(M("scenarioengine"), "OSCParameterDeclarations", "");
		cl.def( pybind11::init( [](scenarioengine::OSCParameterDeclarations const &o){ return new scenarioengine::OSCParameterDeclarations(o); } ) );
		cl.def( pybind11::init( [](){ return new scenarioengine::OSCParameterDeclarations(); } ) );

		pybind11::enum_<scenarioengine::OSCParameterDeclarations::ParameterType>(cl, "ParameterType", "")
			.value("PARAM_TYPE_INTEGER", scenarioengine::OSCParameterDeclarations::ParameterType::PARAM_TYPE_INTEGER)
			.value("PARAM_TYPE_DOUBLE", scenarioengine::OSCParameterDeclarations::ParameterType::PARAM_TYPE_DOUBLE)
			.value("PARAM_TYPE_STRING", scenarioengine::OSCParameterDeclarations::ParameterType::PARAM_TYPE_STRING)
			.value("PARAM_TYPE_BOOL", scenarioengine::OSCParameterDeclarations::ParameterType::PARAM_TYPE_BOOL);

		cl.def_readwrite("Parameter", &scenarioengine::OSCParameterDeclarations::Parameter);
		cl.def("assign", (class scenarioengine::OSCParameterDeclarations & (scenarioengine::OSCParameterDeclarations::*)(const class scenarioengine::OSCParameterDeclarations &)) &scenarioengine::OSCParameterDeclarations::operator=, "C++: scenarioengine::OSCParameterDeclarations::operator=(const class scenarioengine::OSCParameterDeclarations &) --> class scenarioengine::OSCParameterDeclarations &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
}


// File: unknown/unknown_3.cpp
#include <iostream> // --trace
#include <iterator> // __gnu_cxx::__normal_iterator
#include <memory> // std::allocator
#include <ostream> // std::basic_ostream
#include <sstream> // __str__
#include <string> // std::basic_string
#include <string> // std::char_traits

#include <pybind11/pybind11.h>
#include <functional>
#include <string>
#include <pybind11/stl.h>
#include <pybind11/stl_bind.h>
#include <pybind11/functional.h>
#include <fstream>
#include "viewer.hpp"
#include <osgDB/ReadFile>
#include <osg/ComputeBoundsVisitor>
#include <osg/LineWidth>
#include <osg/Point>
#include <osg/BlendFunc>
#include <osg/BlendColor>
#include <osg/Geode>
#include <osg/Group>
#include <osg/ShapeDrawable>
#include <osg/CullFace>
#include <osgGA/StateSetManipulator>
#include <osgGA/TrackballManipulator>
#include <osgGA/KeySwitchMatrixManipulator>
#include <osgGA/FlightManipulator>
#include <osgGA/DriveManipulator>
#include <osgGA/TerrainManipulator>
#include <osgGA/SphericalManipulator>
#include <osgViewer/ViewerEventHandlers>
#include <osgDB/Registry>
#include <osgShadow/StandardShadowMap>
#include <osgShadow/ShadowMap>
#include <osgShadow/ShadowedScene>
#include <osgUtil/SmoothingVisitor>
#include "CommonMini.hpp"
#include "RubberbandManipulator.hpp"
#include "IdealSensor.hpp"
#include "RoadManager.hpp"
#include "CommonMini.hpp"
#include "roadgeom.hpp"


#ifndef BINDER_PYBIND11_TYPE_CASTER
	#define BINDER_PYBIND11_TYPE_CASTER
	PYBIND11_DECLARE_HOLDER_TYPE(T, std::shared_ptr<T>)
	PYBIND11_DECLARE_HOLDER_TYPE(T, T*)
	PYBIND11_MAKE_OPAQUE(std::shared_ptr<void>)
#endif

// scenarioengine::Controller file: line:31
struct PyCallBack_scenarioengine_Controller : public scenarioengine::Controller {
	using scenarioengine::Controller::Controller;

	const char * GetTypeName() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::Controller *>(this), "GetTypeName");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<const char *>::value) {
				static pybind11::detail::override_caster_t<const char *> caster;
				return pybind11::detail::cast_ref<const char *>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<const char *>(std::move(o));
		}
		return Controller::GetTypeName();
	}
	int GetType() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::Controller *>(this), "GetType");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<int>::value) {
				static pybind11::detail::override_caster_t<int> caster;
				return pybind11::detail::cast_ref<int>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<int>(std::move(o));
		}
		return Controller::GetType();
	}
	void Activate(enum ControlDomains a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::Controller *>(this), "Activate");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Controller::Activate(a0);
	}
	void Deactivate() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::Controller *>(this), "Deactivate");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Controller::Deactivate();
	}
	void Init() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::Controller *>(this), "Init");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Controller::Init();
	}
	void ReportKeyEvent(int a0, bool a1) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::Controller *>(this), "ReportKeyEvent");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0, a1);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Controller::ReportKeyEvent(a0, a1);
	}
	void Step(double a0) override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const scenarioengine::Controller *>(this), "Step");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>(a0);
			if (pybind11::detail::cast_is_temporary_value_reference<void>::value) {
				static pybind11::detail::override_caster_t<void> caster;
				return pybind11::detail::cast_ref<void>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<void>(std::move(o));
		}
		return Controller::Step(a0);
	}
};

void bind_unknown_unknown_3(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	std::cout << "B32_[scenarioengine::Parameters] ";
	{ // scenarioengine::Parameters file: line:25
		pybind11::class_<scenarioengine::Parameters, std::shared_ptr<scenarioengine::Parameters>> cl(M("scenarioengine"), "Parameters", "");
		cl.def( pybind11::init( [](){ return new scenarioengine::Parameters(); } ) );
		cl.def( pybind11::init( [](scenarioengine::Parameters const &o){ return new scenarioengine::Parameters(o); } ) );
		cl.def_readwrite("paramDeclarationsSize_", &scenarioengine::Parameters::paramDeclarationsSize_);
		cl.def_readwrite("catalog_param_assignments", &scenarioengine::Parameters::catalog_param_assignments);
		cl.def_readwrite("parameterDeclarations_", &scenarioengine::Parameters::parameterDeclarations_);
		cl.def("CreateRestorePoint", (void (scenarioengine::Parameters::*)()) &scenarioengine::Parameters::CreateRestorePoint, "C++: scenarioengine::Parameters::CreateRestorePoint() --> void");
		cl.def("RestoreParameterDeclarations", (void (scenarioengine::Parameters::*)()) &scenarioengine::Parameters::RestoreParameterDeclarations, "C++: scenarioengine::Parameters::RestoreParameterDeclarations() --> void");
		cl.def("GetNumberOfParameters", (int (scenarioengine::Parameters::*)()) &scenarioengine::Parameters::GetNumberOfParameters, "C++: scenarioengine::Parameters::GetNumberOfParameters() --> int");
		cl.def("GetParameterName", (const char * (scenarioengine::Parameters::*)(int, enum scenarioengine::OSCParameterDeclarations::ParameterType *)) &scenarioengine::Parameters::GetParameterName, "C++: scenarioengine::Parameters::GetParameterName(int, enum scenarioengine::OSCParameterDeclarations::ParameterType *) --> const char *", pybind11::return_value_policy::reference, pybind11::arg("index"), pybind11::arg("type"));
	}
	std::cout << "B33_[scenarioengine::Controller] ";
	{ // scenarioengine::Controller file: line:31
		pybind11::class_<scenarioengine::Controller, std::shared_ptr<scenarioengine::Controller>, PyCallBack_scenarioengine_Controller> cl(M("scenarioengine"), "Controller", "");
		cl.def( pybind11::init( [](){ return new scenarioengine::Controller(); }, [](){ return new PyCallBack_scenarioengine_Controller(); } ) );
		cl.def( pybind11::init( [](PyCallBack_scenarioengine_Controller const &o){ return new PyCallBack_scenarioengine_Controller(o); } ) );
		cl.def( pybind11::init( [](scenarioengine::Controller const &o){ return new scenarioengine::Controller(o); } ) );

		pybind11::enum_<scenarioengine::Controller::Type>(cl, "Type", pybind11::arithmetic(), "")
			.value("CONTROLLER_TYPE_DEFAULT", scenarioengine::Controller::CONTROLLER_TYPE_DEFAULT)
			.value("CONTROLLER_TYPE_EXTERNAL", scenarioengine::Controller::CONTROLLER_TYPE_EXTERNAL)
			.value("CONTROLLER_TYPE_FOLLOW_GHOST", scenarioengine::Controller::CONTROLLER_TYPE_FOLLOW_GHOST)
			.value("CONTROLLER_TYPE_INTERACTIVE", scenarioengine::Controller::CONTROLLER_TYPE_INTERACTIVE)
			.value("CONTROLLER_TYPE_SLOPPY_DRIVER", scenarioengine::Controller::CONTROLLER_TYPE_SLOPPY_DRIVER)
			.value("CONTROLLER_TYPE_SUMO", scenarioengine::Controller::CONTROLLER_TYPE_SUMO)
			.value("CONTROLLER_TYPE_REL2ABS", scenarioengine::Controller::CONTROLLER_TYPE_REL2ABS)
			.value("CONTROLLER_TYPE_ACC", scenarioengine::Controller::CONTROLLER_TYPE_ACC)
			.value("N_CONTROLLER_TYPES", scenarioengine::Controller::N_CONTROLLER_TYPES)
			.value("GHOST_RESERVED_TYPE", scenarioengine::Controller::GHOST_RESERVED_TYPE)
			.value("USER_CONTROLLER_TYPE_BASE", scenarioengine::Controller::USER_CONTROLLER_TYPE_BASE)
			.export_values();

		cl.def_static("GetTypeNameStatic", (const char * (*)()) &scenarioengine::Controller::GetTypeNameStatic, "C++: scenarioengine::Controller::GetTypeNameStatic() --> const char *", pybind11::return_value_policy::automatic);
		cl.def("GetTypeName", (const char * (scenarioengine::Controller::*)()) &scenarioengine::Controller::GetTypeName, "C++: scenarioengine::Controller::GetTypeName() --> const char *", pybind11::return_value_policy::reference);
		cl.def_static("GetTypeStatic", (const int (*)()) &scenarioengine::Controller::GetTypeStatic, "C++: scenarioengine::Controller::GetTypeStatic() --> const int");
		cl.def("GetType", (int (scenarioengine::Controller::*)()) &scenarioengine::Controller::GetType, "C++: scenarioengine::Controller::GetType() --> int");
		cl.def("Activate", (void (scenarioengine::Controller::*)(enum ControlDomains)) &scenarioengine::Controller::Activate, "C++: scenarioengine::Controller::Activate(enum ControlDomains) --> void", pybind11::arg("domainMask"));
		cl.def("Deactivate", (void (scenarioengine::Controller::*)()) &scenarioengine::Controller::Deactivate, "C++: scenarioengine::Controller::Deactivate() --> void");
		cl.def("Init", (void (scenarioengine::Controller::*)()) &scenarioengine::Controller::Init, "C++: scenarioengine::Controller::Init() --> void");
		cl.def("ReportKeyEvent", (void (scenarioengine::Controller::*)(int, bool)) &scenarioengine::Controller::ReportKeyEvent, "C++: scenarioengine::Controller::ReportKeyEvent(int, bool) --> void", pybind11::arg("key"), pybind11::arg("down"));
		cl.def("Step", (void (scenarioengine::Controller::*)(double)) &scenarioengine::Controller::Step, "C++: scenarioengine::Controller::Step(double) --> void", pybind11::arg("timeStep"));
		cl.def("Active", (bool (scenarioengine::Controller::*)()) &scenarioengine::Controller::Active, "C++: scenarioengine::Controller::Active() --> bool");
		cl.def("GetDomain", (enum ControlDomains (scenarioengine::Controller::*)()) &scenarioengine::Controller::GetDomain, "C++: scenarioengine::Controller::GetDomain() --> enum ControlDomains");
		cl.def("GetMode", (int (scenarioengine::Controller::*)()) &scenarioengine::Controller::GetMode, "C++: scenarioengine::Controller::GetMode() --> int");
		cl.def("IsActiveOnDomains", (bool (scenarioengine::Controller::*)(enum ControlDomains)) &scenarioengine::Controller::IsActiveOnDomains, "C++: scenarioengine::Controller::IsActiveOnDomains(enum ControlDomains) --> bool", pybind11::arg("domainMask"));
		cl.def("IsActiveOnAnyOfDomains", (bool (scenarioengine::Controller::*)(enum ControlDomains)) &scenarioengine::Controller::IsActiveOnAnyOfDomains, "C++: scenarioengine::Controller::IsActiveOnAnyOfDomains(enum ControlDomains) --> bool", pybind11::arg("domainMask"));
		cl.def("IsActive", (bool (scenarioengine::Controller::*)()) &scenarioengine::Controller::IsActive, "C++: scenarioengine::Controller::IsActive() --> bool");
		cl.def("assign", (class scenarioengine::Controller & (scenarioengine::Controller::*)(const class scenarioengine::Controller &)) &scenarioengine::Controller::operator=, "C++: scenarioengine::Controller::operator=(const class scenarioengine::Controller &) --> class scenarioengine::Controller &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	std::cout << "B34_[class scenarioengine::Controller * scenarioengine::InstantiateController(void *)] ";
	// scenarioengine::InstantiateController(void *) file: line:114
	M("scenarioengine").def("InstantiateController", (class scenarioengine::Controller * (*)(void *)) &scenarioengine::InstantiateController, "C++: scenarioengine::InstantiateController(void *) --> class scenarioengine::Controller *", pybind11::return_value_policy::automatic, pybind11::arg("args"));

}


#include <map>
#include <memory>
#include <stdexcept>
#include <functional>
#include <string>

#include <pybind11/pybind11.h>

typedef std::function< pybind11::module & (std::string const &) > ModuleGetter;

void bind_unknown_unknown(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_unknown_unknown_1(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_unknown_unknown_2(std::function< pybind11::module &(std::string const &namespace_) > &M);
void bind_unknown_unknown_3(std::function< pybind11::module &(std::string const &namespace_) > &M);


PYBIND11_MODULE(pycontroller, root_module) {
	root_module.doc() = "pycontroller module";

	std::map <std::string, pybind11::module> modules;
	ModuleGetter M = [&](std::string const &namespace_) -> pybind11::module & {
		auto it = modules.find(namespace_);
		if( it == modules.end() ) throw std::runtime_error("Attempt to access pybind11::module for namespace " + namespace_ + " before it was created!!!");
		return it->second;
	};

	modules[""] = root_module;

	std::vector< std::pair<std::string, std::string> > sub_modules {
		{"", "scenarioengine"},
	};
	for(auto &p : sub_modules ) modules[p.first.size() ? p.first+"::"+p.second : p.second] = modules[p.first].def_submodule(p.second.c_str(), ("Bindings for " + p.first + "::" + p.second + " namespace").c_str() );

	//pybind11::class_<std::shared_ptr<void>>(M(""), "_encapsulated_data_");

	bind_unknown_unknown(M);
	bind_unknown_unknown_1(M);
	bind_unknown_unknown_2(M);
	bind_unknown_unknown_3(M);

}

// Source list file: /home/wave/repositories/esmini-pybind11-dev/esmini/EnvironmentSimulator/src/controller/pycontroller.sources
// pycontroller.cpp
// unknown/unknown.cpp
// unknown/unknown_1.cpp
// unknown/unknown_2.cpp
// unknown/unknown_3.cpp

// Modules list file: /home/wave/repositories/esmini-pybind11-dev/esmini/EnvironmentSimulator/src/controller/pycontroller.modules
// scenarioengine 
