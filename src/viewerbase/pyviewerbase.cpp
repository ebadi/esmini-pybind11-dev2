// File: unknown/unknown.cpp
#include <functional> // std::less
#include <iostream> // --trace
#include <iterator> // __gnu_cxx::__normal_iterator
#include <map> // std::map
#include <memory> // std::allocator
#include <osg/ApplicationUsage> // 
#include <osg/ApplicationUsage> // osg::ApplicationUsage
#include <osg/ArgumentParser> // 
#include <osg/ArgumentParser> // osg::ArgumentParser
#include <osg/Array> // 
#include <osg/Array> // osg::TemplateArray
#include <osg/Billboard> // osg::Billboard
#include <osg/BoundingSphere> // osg::BoundingSphereImpl
#include <osg/Callback> // osg::Callback
#include <osg/Camera> // osg::Camera
#include <osg/ClearNode> // osg::ClearNode
#include <osg/CoordinateSystemNode> // osg::CoordinateSystemNode
#include <osg/CopyOp> // osg::CopyOp
#include <osg/CullStack> // osg::CullStack
#include <osg/Drawable> // osg::Drawable
#include <osg/FrameStamp> // osg::FrameStamp
#include <osg/Geode> // osg::Geode
#include <osg/Geometry> // osg::Geometry
#include <osg/GraphicsContext> // osg::GraphicsContext
#include <osg/Group> // osg::Group
#include <osg/LOD> // osg::LOD
#include <osg/LightSource> // osg::LightSource
#include <osg/MatrixTransform> // osg::MatrixTransform
#include <osg/Matrixd> // osg::Matrixd
#include <osg/Node> // osg::Node
#include <osg/NodeVisitor> // 
#include <osg/NodeVisitor> // osg::NodeVisitor
#include <osg/Object> // osg::Object
#include <osg/OccluderNode> // osg::OccluderNode
#include <osg/PagedLOD> // osg::PagedLOD
#include <osg/PositionAttitudeTransform> // osg::PositionAttitudeTransform
#include <osg/Projection> // osg::Projection
#include <osg/State> // osg::State
#include <osg/StateSet> // osg::StateSet
#include <osg/Stats> // osg::Stats
#include <osg/Switch> // osg::Switch
#include <osg/Transform> // osg::Transform
#include <osg/ValueMap> // osg::ValueMap
#include <osg/ValueStack> // osg::ValueStack
#include <osg/Vec2f> // osg::Vec2f
#include <osg/Vec3f> // osg::Vec3f
#include <osg/Vec4f> // osg::Vec4f
#include <osg/View> // osg::View
#include <osg/observer_ptr> // osg::observer_ptr
#include <osg/ref_ptr> // osg::ref_ptr
#include <osgGA/EventVisitor> // osgGA::EventVisitor
#include <osgGA/GUIActionAdapter> // osgGA::GUIActionAdapter
#include <osgGA/GUIEventAdapter> // 
#include <osgGA/GUIEventAdapter> // osgGA::GUIEventAdapter
#include <osgGA/GUIEventAdapter> // osgGA::PointerData
#include <osgUtil/CullVisitor> // osgUtil::CullVisitor
#include <osgUtil/IntersectionVisitor> // osgUtil::IntersectionVisitor
#include <osgUtil/LineSegmentIntersector> // osgUtil::LineSegmentIntersector
#include <osgUtil/UpdateVisitor> // osgUtil::UpdateVisitor
#include <osgViewer/GraphicsWindow> // osgViewer::GraphicsWindowEmbedded
#include <osgViewer/Viewer> // osgViewer::Viewer
#include <ostream> // std::basic_ostream
#include <set> // std::multiset
#include <sstream> // __str__
#include <string> // std::basic_string
#include <string> // std::char_traits
#include <utility> // std::pair
#include <vector> // std::vector

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

// viewer::EntityModel file: line:179
struct PyCallBack_viewer_EntityModel : public viewer::EntityModel {
	using viewer::EntityModel::EntityModel;

	int GetType() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const viewer::EntityModel *>(this), "GetType");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<int>::value) {
				static pybind11::detail::override_caster_t<int> caster;
				return pybind11::detail::cast_ref<int>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<int>(std::move(o));
		}
		return EntityModel::GetType();
	}
};

// viewer::CarModel file: line:222
struct PyCallBack_viewer_CarModel : public viewer::CarModel {
	using viewer::CarModel::CarModel;

	int GetType() override {
		pybind11::gil_scoped_acquire gil;
		pybind11::function overload = pybind11::get_overload(static_cast<const viewer::CarModel *>(this), "GetType");
		if (overload) {
			auto o = overload.operator()<pybind11::return_value_policy::reference>();
			if (pybind11::detail::cast_is_temporary_value_reference<int>::value) {
				static pybind11::detail::override_caster_t<int> caster;
				return pybind11::detail::cast_ref<int>(std::move(o), caster);
			}
			else return pybind11::detail::cast_safe<int>(std::move(o));
		}
		return CarModel::GetType();
	}
};

// viewer::VisibilityCallback file: line:243
struct PyCallBack_viewer_VisibilityCallback : public viewer::VisibilityCallback {
	using viewer::VisibilityCallback::VisibilityCallback;

};

// viewer::ViewerEventHandler file: line:382
struct PyCallBack_viewer_ViewerEventHandler : public viewer::ViewerEventHandler {
	using viewer::ViewerEventHandler::ViewerEventHandler;

};

void bind_unknown_unknown(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	std::cout << "B0_[viewer::PolyLine] ";
	{ // viewer::PolyLine file: line:63
		pybind11::class_<viewer::PolyLine, std::shared_ptr<viewer::PolyLine>> cl(M("viewer"), "PolyLine", "");
		cl.def( pybind11::init( [](viewer::PolyLine const &o){ return new viewer::PolyLine(o); } ) );
		cl.def_readwrite("pline_vertex_data_", &viewer::PolyLine::pline_vertex_data_);
		cl.def_readwrite("color_", &viewer::PolyLine::color_);
		cl.def_readwrite("pline_geom_", &viewer::PolyLine::pline_geom_);
		cl.def_readwrite("dots_geom_", &viewer::PolyLine::dots_geom_);
		cl.def_readwrite("dot3D_shape_", &viewer::PolyLine::dot3D_shape_);
		cl.def_readwrite("dot3D_geode_", &viewer::PolyLine::dot3D_geode_);
		cl.def_readwrite("dots3D_group_", &viewer::PolyLine::dots3D_group_);
		cl.def("Update", (void (viewer::PolyLine::*)()) &viewer::PolyLine::Update, "C++: viewer::PolyLine::Update() --> void");
		cl.def("Redraw", (void (viewer::PolyLine::*)()) &viewer::PolyLine::Redraw, "C++: viewer::PolyLine::Redraw() --> void");
		cl.def("SetNodeMaskLines", (void (viewer::PolyLine::*)(int)) &viewer::PolyLine::SetNodeMaskLines, "C++: viewer::PolyLine::SetNodeMaskLines(int) --> void", pybind11::arg("nodemask"));
		cl.def("SetNodeMaskDots", (void (viewer::PolyLine::*)(int)) &viewer::PolyLine::SetNodeMaskDots, "C++: viewer::PolyLine::SetNodeMaskDots(int) --> void", pybind11::arg("nodemask"));
	}
	std::cout << "B1_[viewer::SensorViewFrustum] ";
	{ // viewer::SensorViewFrustum file: line:122
		pybind11::class_<viewer::SensorViewFrustum, std::shared_ptr<viewer::SensorViewFrustum>> cl(M("viewer"), "SensorViewFrustum", "");
		cl.def( pybind11::init( [](viewer::SensorViewFrustum const &o){ return new viewer::SensorViewFrustum(o); } ) );
		cl.def_readwrite("txNode_", &viewer::SensorViewFrustum::txNode_);
		cl.def_readwrite("line_group_", &viewer::SensorViewFrustum::line_group_);
		cl.def_readwrite("plines_", &viewer::SensorViewFrustum::plines_);
		cl.def("Update", (void (viewer::SensorViewFrustum::*)()) &viewer::SensorViewFrustum::Update, "C++: viewer::SensorViewFrustum::Update() --> void");
	}
	std::cout << "B2_[viewer::Trajectory] ";
	{ // viewer::Trajectory file: line:135
		pybind11::class_<viewer::Trajectory, std::shared_ptr<viewer::Trajectory>> cl(M("viewer"), "Trajectory", "");
		cl.def( pybind11::init( [](viewer::Trajectory const &o){ return new viewer::Trajectory(o); } ) );
		cl.def_readwrite("vertices_", &viewer::Trajectory::vertices_);
		cl.def("Disable", (void (viewer::Trajectory::*)()) &viewer::Trajectory::Disable, "C++: viewer::Trajectory::Disable() --> void");
	}
	std::cout << "B3_[viewer::PointSensor] ";
	{ // viewer::PointSensor file: line:162
		pybind11::class_<viewer::PointSensor, std::shared_ptr<viewer::PointSensor>> cl(M("viewer"), "PointSensor", "");
		cl.def( pybind11::init( [](){ return new viewer::PointSensor(); } ) );
		cl.def( pybind11::init( [](viewer::PointSensor const &o){ return new viewer::PointSensor(o); } ) );
		cl.def_readwrite("group_", &viewer::PointSensor::group_);
		cl.def_readwrite("ball_", &viewer::PointSensor::ball_);
		cl.def_readwrite("ball_radius_", &viewer::PointSensor::ball_radius_);
		cl.def_readwrite("line_", &viewer::PointSensor::line_);
		cl.def_readwrite("line_vertex_data_", &viewer::PointSensor::line_vertex_data_);
		cl.def_readwrite("pivot_pos", &viewer::PointSensor::pivot_pos);
		cl.def_readwrite("target_pos", &viewer::PointSensor::target_pos);
		cl.def("Show", (void (viewer::PointSensor::*)()) &viewer::PointSensor::Show, "C++: viewer::PointSensor::Show() --> void");
		cl.def("Hide", (void (viewer::PointSensor::*)()) &viewer::PointSensor::Hide, "C++: viewer::PointSensor::Hide() --> void");
	}
	std::cout << "B4_[viewer::EntityModel] ";
	{ // viewer::EntityModel file: line:179
		pybind11::class_<viewer::EntityModel, std::shared_ptr<viewer::EntityModel>, PyCallBack_viewer_EntityModel> cl(M("viewer"), "EntityModel", "");
		cl.def( pybind11::init( [](PyCallBack_viewer_EntityModel const &o){ return new PyCallBack_viewer_EntityModel(o); } ) );
		cl.def( pybind11::init( [](viewer::EntityModel const &o){ return new viewer::EntityModel(o); } ) );
		cl.def_readwrite("group_", &viewer::EntityModel::group_);
		cl.def_readwrite("lod_", &viewer::EntityModel::lod_);
		cl.def_readwrite("txNode_", &viewer::EntityModel::txNode_);
		cl.def_readwrite("bb_", &viewer::EntityModel::bb_);
		cl.def_readwrite("quat_", &viewer::EntityModel::quat_);
		cl.def_readwrite("parent_", &viewer::EntityModel::parent_);
		cl.def_readwrite("size_x", &viewer::EntityModel::size_x);
		cl.def_readwrite("size_y", &viewer::EntityModel::size_y);
		cl.def_readwrite("center_x", &viewer::EntityModel::center_x);
		cl.def_readwrite("center_y", &viewer::EntityModel::center_y);
		cl.def_readwrite("name_", &viewer::EntityModel::name_);
		cl.def_readwrite("filename_", &viewer::EntityModel::filename_);
		cl.def_readwrite("blend_color_", &viewer::EntityModel::blend_color_);
		cl.def_readwrite("state_set_", &viewer::EntityModel::state_set_);
		cl.def("GetType", (int (viewer::EntityModel::*)()) &viewer::EntityModel::GetType, "C++: viewer::EntityModel::GetType() --> int");
		cl.def("SetPosition", (void (viewer::EntityModel::*)(double, double, double)) &viewer::EntityModel::SetPosition, "C++: viewer::EntityModel::SetPosition(double, double, double) --> void", pybind11::arg("x"), pybind11::arg("y"), pybind11::arg("z"));
		cl.def("SetRotation", (void (viewer::EntityModel::*)(double, double, double, double)) &viewer::EntityModel::SetRotation, "C++: viewer::EntityModel::SetRotation(double, double, double, double) --> void", pybind11::arg("hRoad"), pybind11::arg("pRoad"), pybind11::arg("hRelative"), pybind11::arg("r"));
		cl.def("SetRotation", (void (viewer::EntityModel::*)(double, double, double)) &viewer::EntityModel::SetRotation, "C++: viewer::EntityModel::SetRotation(double, double, double) --> void", pybind11::arg("h"), pybind11::arg("p"), pybind11::arg("r"));
		cl.def("SetTransparency", (void (viewer::EntityModel::*)(double)) &viewer::EntityModel::SetTransparency, "C++: viewer::EntityModel::SetTransparency(double) --> void", pybind11::arg("factor"));
		cl.def("assign", (class viewer::EntityModel & (viewer::EntityModel::*)(const class viewer::EntityModel &)) &viewer::EntityModel::operator=, "C++: viewer::EntityModel::operator=(const class viewer::EntityModel &) --> class viewer::EntityModel &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	std::cout << "B5_[viewer::CarModel] ";
	{ // viewer::CarModel file: line:222
		pybind11::class_<viewer::CarModel, std::shared_ptr<viewer::CarModel>, PyCallBack_viewer_CarModel, viewer::EntityModel> cl(M("viewer"), "CarModel", "");
		cl.def( pybind11::init( [](PyCallBack_viewer_CarModel const &o){ return new PyCallBack_viewer_CarModel(o); } ) );
		cl.def( pybind11::init( [](viewer::CarModel const &o){ return new viewer::CarModel(o); } ) );
		cl.def_readwrite("wheel_", &viewer::CarModel::wheel_);
		cl.def_readwrite("wheel_angle_", &viewer::CarModel::wheel_angle_);
		cl.def_readwrite("wheel_rot_", &viewer::CarModel::wheel_rot_);
		cl.def("GetType", (int (viewer::CarModel::*)()) &viewer::CarModel::GetType, "C++: viewer::CarModel::GetType() --> int");
		cl.def("UpdateWheels", (void (viewer::CarModel::*)(double, double)) &viewer::CarModel::UpdateWheels, "C++: viewer::CarModel::UpdateWheels(double, double) --> void", pybind11::arg("wheel_angle"), pybind11::arg("wheel_rotation"));
		cl.def("UpdateWheelsDelta", (void (viewer::CarModel::*)(double, double)) &viewer::CarModel::UpdateWheelsDelta, "C++: viewer::CarModel::UpdateWheelsDelta(double, double) --> void", pybind11::arg("wheel_angle"), pybind11::arg("wheel_rotation_delta"));
		cl.def("assign", (class viewer::CarModel & (viewer::CarModel::*)(const class viewer::CarModel &)) &viewer::CarModel::operator=, "C++: viewer::CarModel::operator=(const class viewer::CarModel &) --> class viewer::CarModel &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	std::cout << "B6_[viewer::VisibilityCallback] ";
	{ // viewer::VisibilityCallback file: line:243
		pybind11::class_<viewer::VisibilityCallback, std::shared_ptr<viewer::VisibilityCallback>, PyCallBack_viewer_VisibilityCallback> cl(M("viewer"), "VisibilityCallback", "");
		cl.def( pybind11::init( [](PyCallBack_viewer_VisibilityCallback const &o){ return new PyCallBack_viewer_VisibilityCallback(o); } ) );
		cl.def( pybind11::init( [](viewer::VisibilityCallback const &o){ return new viewer::VisibilityCallback(o); } ) );
	}
	std::cout << "B7_[viewer::Viewer] ";
	{ // viewer::Viewer file: line:286
		pybind11::class_<viewer::Viewer, std::shared_ptr<viewer::Viewer>> cl(M("viewer"), "Viewer", "");
		cl.def( pybind11::init( [](viewer::Viewer const &o){ return new viewer::Viewer(o); } ) );
		cl.def_readwrite("currentCarInFocus_", &viewer::Viewer::currentCarInFocus_);
		cl.def_readwrite("camMode_", &viewer::Viewer::camMode_);
		cl.def_readwrite("line_node_", &viewer::Viewer::line_node_);
		cl.def_readwrite("shadow_node_", &viewer::Viewer::shadow_node_);
		cl.def_readwrite("dot_node_", &viewer::Viewer::dot_node_);
		cl.def_readwrite("odrLines_", &viewer::Viewer::odrLines_);
		cl.def_readwrite("osiFeatures_", &viewer::Viewer::osiFeatures_);
		cl.def_readwrite("trajectoryLines_", &viewer::Viewer::trajectoryLines_);
		cl.def_readwrite("envTx_", &viewer::Viewer::envTx_);
		cl.def_readwrite("environment_", &viewer::Viewer::environment_);
		cl.def_readwrite("rubberbandManipulator_", &viewer::Viewer::rubberbandManipulator_);
		cl.def_readwrite("nodeTrackerManipulator_", &viewer::Viewer::nodeTrackerManipulator_);
		cl.def_readwrite("entities_", &viewer::Viewer::entities_);
		cl.def_readwrite("lodScale_", &viewer::Viewer::lodScale_);
		cl.def_readwrite("roadSensors_", &viewer::Viewer::roadSensors_);
		cl.def_readwrite("trails_", &viewer::Viewer::trails_);
		cl.def_readwrite("showInfoText", &viewer::Viewer::showInfoText);
		cl.def_readwrite("exe_path_", &viewer::Viewer::exe_path_);
		cl.def_readwrite("callback_", &viewer::Viewer::callback_);
		cl.def_readwrite("infoTextCamera", &viewer::Viewer::infoTextCamera);
		cl.def_readwrite("infoText", &viewer::Viewer::infoText);
		cl.def_readwrite("polyLine_", &viewer::Viewer::polyLine_);
		cl.def_static("PrintUsage", (void (*)()) &viewer::Viewer::PrintUsage, "C++: viewer::Viewer::PrintUsage() --> void");
		cl.def("SetCameraMode", (void (viewer::Viewer::*)(int)) &viewer::Viewer::SetCameraMode, "C++: viewer::Viewer::SetCameraMode(int) --> void", pybind11::arg("mode"));
		cl.def("UpdateCameraFOV", (void (viewer::Viewer::*)()) &viewer::Viewer::UpdateCameraFOV, "C++: viewer::Viewer::UpdateCameraFOV() --> void");
		cl.def("SetVehicleInFocus", (void (viewer::Viewer::*)(int)) &viewer::Viewer::SetVehicleInFocus, "C++: viewer::Viewer::SetVehicleInFocus(int) --> void", pybind11::arg("idx"));
		cl.def("GetEntityInFocus", (int (viewer::Viewer::*)()) &viewer::Viewer::GetEntityInFocus, "C++: viewer::Viewer::GetEntityInFocus() --> int");
		cl.def("AddEnvironment", (int (viewer::Viewer::*)(const char *)) &viewer::Viewer::AddEnvironment, "C++: viewer::Viewer::AddEnvironment(const char *) --> int", pybind11::arg("filename"));
		cl.def("UpdateSensor", (void (viewer::Viewer::*)(class viewer::PointSensor *)) &viewer::Viewer::UpdateSensor, "C++: viewer::Viewer::UpdateSensor(class viewer::PointSensor *) --> void", pybind11::arg("sensor"));
		cl.def("SensorSetPivotPos", (void (viewer::Viewer::*)(class viewer::PointSensor *, double, double, double)) &viewer::Viewer::SensorSetPivotPos, "C++: viewer::Viewer::SensorSetPivotPos(class viewer::PointSensor *, double, double, double) --> void", pybind11::arg("sensor"), pybind11::arg("x"), pybind11::arg("y"), pybind11::arg("z"));
		cl.def("SensorSetTargetPos", (void (viewer::Viewer::*)(class viewer::PointSensor *, double, double, double)) &viewer::Viewer::SensorSetTargetPos, "C++: viewer::Viewer::SensorSetTargetPos(class viewer::PointSensor *, double, double, double) --> void", pybind11::arg("sensor"), pybind11::arg("x"), pybind11::arg("y"), pybind11::arg("z"));
		cl.def("setKeyUp", (void (viewer::Viewer::*)(bool)) &viewer::Viewer::setKeyUp, "C++: viewer::Viewer::setKeyUp(bool) --> void", pybind11::arg("pressed"));
		cl.def("setKeyDown", (void (viewer::Viewer::*)(bool)) &viewer::Viewer::setKeyDown, "C++: viewer::Viewer::setKeyDown(bool) --> void", pybind11::arg("pressed"));
		cl.def("setKeyLeft", (void (viewer::Viewer::*)(bool)) &viewer::Viewer::setKeyLeft, "C++: viewer::Viewer::setKeyLeft(bool) --> void", pybind11::arg("pressed"));
		cl.def("setKeyRight", (void (viewer::Viewer::*)(bool)) &viewer::Viewer::setKeyRight, "C++: viewer::Viewer::setKeyRight(bool) --> void", pybind11::arg("pressed"));
		cl.def("getKeyUp", (bool (viewer::Viewer::*)()) &viewer::Viewer::getKeyUp, "C++: viewer::Viewer::getKeyUp() --> bool");
		cl.def("getKeyDown", (bool (viewer::Viewer::*)()) &viewer::Viewer::getKeyDown, "C++: viewer::Viewer::getKeyDown() --> bool");
		cl.def("getKeyLeft", (bool (viewer::Viewer::*)()) &viewer::Viewer::getKeyLeft, "C++: viewer::Viewer::getKeyLeft() --> bool");
		cl.def("getKeyRight", (bool (viewer::Viewer::*)()) &viewer::Viewer::getKeyRight, "C++: viewer::Viewer::getKeyRight() --> bool");
		cl.def("SetQuitRequest", (void (viewer::Viewer::*)(bool)) &viewer::Viewer::SetQuitRequest, "C++: viewer::Viewer::SetQuitRequest(bool) --> void", pybind11::arg("value"));
		cl.def("GetQuitRequest", (bool (viewer::Viewer::*)()) &viewer::Viewer::GetQuitRequest, "C++: viewer::Viewer::GetQuitRequest() --> bool");
		cl.def("SetInfoTextProjection", (void (viewer::Viewer::*)(int, int)) &viewer::Viewer::SetInfoTextProjection, "C++: viewer::Viewer::SetInfoTextProjection(int, int) --> void", pybind11::arg("width"), pybind11::arg("height"));
		cl.def("SetInfoText", (void (viewer::Viewer::*)(const char *)) &viewer::Viewer::SetInfoText, "C++: viewer::Viewer::SetInfoText(const char *) --> void", pybind11::arg("text"));
		cl.def("SetNodeMaskBits", (void (viewer::Viewer::*)(int)) &viewer::Viewer::SetNodeMaskBits, "C++: viewer::Viewer::SetNodeMaskBits(int) --> void", pybind11::arg("bits"));
		cl.def("SetNodeMaskBits", (void (viewer::Viewer::*)(int, int)) &viewer::Viewer::SetNodeMaskBits, "C++: viewer::Viewer::SetNodeMaskBits(int, int) --> void", pybind11::arg("mask"), pybind11::arg("bits"));
		cl.def("ClearNodeMaskBits", (void (viewer::Viewer::*)(int)) &viewer::Viewer::ClearNodeMaskBits, "C++: viewer::Viewer::ClearNodeMaskBits(int) --> void", pybind11::arg("bits"));
		cl.def("ToggleNodeMaskBits", (void (viewer::Viewer::*)(int)) &viewer::Viewer::ToggleNodeMaskBits, "C++: viewer::Viewer::ToggleNodeMaskBits(int) --> void", pybind11::arg("bits"));
		cl.def("GetNodeMaskBit", (int (viewer::Viewer::*)(int)) &viewer::Viewer::GetNodeMaskBit, "C++: viewer::Viewer::GetNodeMaskBit(int) --> int", pybind11::arg("mask"));
		cl.def("CreateRoadSensors", (bool (viewer::Viewer::*)(class viewer::CarModel *)) &viewer::Viewer::CreateRoadSensors, "C++: viewer::Viewer::CreateRoadSensors(class viewer::CarModel *) --> bool", pybind11::arg("vehicle_model"));
	}
	std::cout << "B8_[viewer::ViewerEventHandler] ";
	{ // viewer::ViewerEventHandler file: line:382
		pybind11::class_<viewer::ViewerEventHandler, std::shared_ptr<viewer::ViewerEventHandler>, PyCallBack_viewer_ViewerEventHandler> cl(M("viewer"), "ViewerEventHandler", "");
		cl.def( pybind11::init<class viewer::Viewer *>(), pybind11::arg("viewer") );

		cl.def( pybind11::init( [](PyCallBack_viewer_ViewerEventHandler const &o){ return new PyCallBack_viewer_ViewerEventHandler(o); } ) );
		cl.def( pybind11::init( [](viewer::ViewerEventHandler const &o){ return new viewer::ViewerEventHandler(o); } ) );
	}
}


#include <map>
#include <memory>
#include <stdexcept>
#include <functional>
#include <string>

#include <pybind11/pybind11.h>

typedef std::function< pybind11::module & (std::string const &) > ModuleGetter;

void bind_unknown_unknown(std::function< pybind11::module &(std::string const &namespace_) > &M);


PYBIND11_MODULE(pyviewerbase, root_module) {
	root_module.doc() = "pyviewerbase module";

	std::map <std::string, pybind11::module> modules;
	ModuleGetter M = [&](std::string const &namespace_) -> pybind11::module & {
		auto it = modules.find(namespace_);
		if( it == modules.end() ) throw std::runtime_error("Attempt to access pybind11::module for namespace " + namespace_ + " before it was created!!!");
		return it->second;
	};

	modules[""] = root_module;

	std::vector< std::pair<std::string, std::string> > sub_modules {
		{"", "viewer"},
	};
	for(auto &p : sub_modules ) modules[p.first.size() ? p.first+"::"+p.second : p.second] = modules[p.first].def_submodule(p.second.c_str(), ("Bindings for " + p.first + "::" + p.second + " namespace").c_str() );

	//pybind11::class_<std::shared_ptr<void>>(M(""), "_encapsulated_data_");

	bind_unknown_unknown(M);

}

// Source list file: /home/wave/repositories/esmini-pybind11-dev/esmini/EnvironmentSimulator/src/viewerbase/pyviewerbase.sources
// pyviewerbase.cpp
// unknown/unknown.cpp

// Modules list file: /home/wave/repositories/esmini-pybind11-dev/esmini/EnvironmentSimulator/src/viewerbase/pyviewerbase.modules
// viewer 
