// ***************************************************************************
//
//   Generated automatically by genwrapper.
//   Please DO NOT EDIT this file!
//
// ***************************************************************************

#include <osgIntrospection/ReflectionMacros>
#include <osgIntrospection/TypedMethodInfo>
#include <osgIntrospection/StaticMethodInfo>
#include <osgIntrospection/Attributes>

#include <OpenThreads/Mutex>
#include <osg/GraphicsContext>
#include <osg/Group>
#include <osg/Node>
#include <osg/Program>
#include <osg/Texture>
#include <osgUtil/GLObjectsVisitor>
#include <osgUtil/IncrementalCompileOperation>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

TYPE_NAME_ALIAS(std::vector< osg::GraphicsContext * >, osgUtil::IncrementalCompileOperation::Contexts)

TYPE_NAME_ALIAS(std::set< osg::GraphicsContext * >, osgUtil::IncrementalCompileOperation::ContextSet)

TYPE_NAME_ALIAS(std::map< osg::GraphicsContext * COMMA  osgUtil::IncrementalCompileOperation::CompileData >, osgUtil::IncrementalCompileOperation::CompileMap)

TYPE_NAME_ALIAS(std::list< osg::ref_ptr< osgUtil::IncrementalCompileOperation::CompileSet > >, osgUtil::IncrementalCompileOperation::CompileSets)

BEGIN_OBJECT_REFLECTOR(osgUtil::IncrementalCompileOperation)
	I_DeclaringFile("osgUtil/IncrementalCompileOperation");
	I_BaseType(osg::GraphicsOperation);
	I_Constructor0(____IncrementalCompileOperation,
	               "",
	               "");
	I_Method1(void, setTargetFrameRate, IN, double, tfr,
	          Properties::NON_VIRTUAL,
	          __void__setTargetFrameRate__double,
	          "Set the target frame rate that the IncrementalCompileOperation should assume. ",
	          "Typically one would set this to the value refresh rate of your display system i.e. 60Hz. Default value is 100. Usage notes. The TargetFrameRate and the MinimumTimeAvailableForGLCompileAndDeletePerFrame parameters are not directly used by IncrementalCompileOperation, but are should be used as a guide for how long to set aside per frame for compiling and deleting OpenGL objects. The longer amount of time to set aside the faster databases will be paged in but with increased chance of frame drops, the lower the amount of time the set aside the slower databases will paged it but with better chance of avoid any frame drops. The default values are chosen to achieve the later when running on a modern mid to high end PC. The way to compute the amount of available time use a scheme such as : availableTime = maximum(1.0/targetFrameRate - timeTakenDuringUpdateCullAndDraw, minimumTimeAvailableForGLCompileAndDeletePerFrame). ");
	I_Method0(double, getTargetFrameRate,
	          Properties::NON_VIRTUAL,
	          __double__getTargetFrameRate,
	          "Get the target frame rate that the IncrementalCompileOperation should assume. ",
	          "");
	I_Method1(void, setMinimumTimeAvailableForGLCompileAndDeletePerFrame, IN, double, ta,
	          Properties::NON_VIRTUAL,
	          __void__setMinimumTimeAvailableForGLCompileAndDeletePerFrame__double,
	          "Set the minimum amount of time (in seconds) that should be made available for compiling and delete OpenGL objects per frame. ",
	          "Default value is 0.001 (1 millisecond). For usage see notes in setTargetFrameRate. ");
	I_Method0(double, getMinimumTimeAvailableForGLCompileAndDeletePerFrame,
	          Properties::NON_VIRTUAL,
	          __double__getMinimumTimeAvailableForGLCompileAndDeletePerFrame,
	          "Get the minimum amount of time that should be made available for compiling and delete OpenGL objects per frame. ",
	          "For usage see notes in setTargetFrameRate. ");
	I_Method1(void, setMaximumNumOfObjectsToCompilePerFrame, IN, unsigned int, num,
	          Properties::NON_VIRTUAL,
	          __void__setMaximumNumOfObjectsToCompilePerFrame__unsigned_int,
	          "Set the maximum number of OpenGL objects that the page should attempt to compile per frame. ",
	          "Note, Lower values reduces chances of a frame drop but lower the rate that database will be paged in at. Default value is 8. ");
	I_Method0(unsigned int, getMaximumNumOfObjectsToCompilePerFrame,
	          Properties::NON_VIRTUAL,
	          __unsigned_int__getMaximumNumOfObjectsToCompilePerFrame,
	          "Get the maximum number of OpenGL objects that the page should attempt to compile per frame. ",
	          "");
	I_Method1(void, setFlushTimeRatio, IN, double, ratio,
	          Properties::NON_VIRTUAL,
	          __void__setFlushTimeRatio__double,
	          "FlushTimeRatio governs how much of the spare time in each frame is used for flushing deleted OpenGL objects. ",
	          "Default value is 0.5, valid range is 0.1 to 0.9. ");
	I_Method0(double, getFlushTimeRatio,
	          Properties::NON_VIRTUAL,
	          __double__getFlushTimeRatio,
	          "",
	          "");
	I_Method1(void, setConservativeTimeRatio, IN, double, ratio,
	          Properties::NON_VIRTUAL,
	          __void__setConservativeTimeRatio__double,
	          "ConservativeTimeRatio governs how much of the measured spare time in each frame is used for flushing deleted and compile new OpenGL objects. ",
	          "Default value is 0.5, valid range is 0.1 to 1.0. A ratio near 1.0 will lead to paged databases being compiled and merged quicker but increase the chances of frame drop. A ratio near 0.1 will lead to paged databases being compiled and merged closer but reduse the chances of frame drop. ");
	I_Method0(double, getConservativeTimeRatio,
	          Properties::NON_VIRTUAL,
	          __double__getConservativeTimeRatio,
	          "",
	          "");
	I_Method1(void, assignContexts, IN, osgUtil::IncrementalCompileOperation::Contexts &, contexts,
	          Properties::NON_VIRTUAL,
	          __void__assignContexts__Contexts_R1,
	          "",
	          "");
	I_Method1(void, removeContexts, IN, osgUtil::IncrementalCompileOperation::Contexts &, contexts,
	          Properties::NON_VIRTUAL,
	          __void__removeContexts__Contexts_R1,
	          "",
	          "");
	I_Method1(void, addGraphicsContext, IN, osg::GraphicsContext *, gc,
	          Properties::NON_VIRTUAL,
	          __void__addGraphicsContext__osg_GraphicsContext_P1,
	          "",
	          "");
	I_Method1(void, removeGraphicsContext, IN, osg::GraphicsContext *, gc,
	          Properties::NON_VIRTUAL,
	          __void__removeGraphicsContext__osg_GraphicsContext_P1,
	          "",
	          "");
	I_Method0(void, mergeCompiledSubgraphs,
	          Properties::NON_VIRTUAL,
	          __void__mergeCompiledSubgraphs,
	          "Merge subgraphs that have been compiled. ",
	          "");
	I_Method1(void, add, IN, osg::Node *, subgraphToCompile,
	          Properties::NON_VIRTUAL,
	          __void__add__osg_Node_P1,
	          "Add a subgraph to be compiled. ",
	          "");
	I_Method2(void, add, IN, osg::Group *, attachmentPoint, IN, osg::Node *, subgraphToCompile,
	          Properties::NON_VIRTUAL,
	          __void__add__osg_Group_P1__osg_Node_P1,
	          "Add a subgraph to be compiled and add automatically to attachPoint on call to mergeCompiledSubgraphs. ",
	          "");
	I_MethodWithDefaults2(void, add, IN, osgUtil::IncrementalCompileOperation::CompileSet *, compileSet, , IN, bool, callBuildCompileMap, true,
	                      Properties::NON_VIRTUAL,
	                      __void__add__CompileSet_P1__bool,
	                      "Add a CompileSet to be compiled. ",
	                      "");
	I_Method0(OpenThreads::Mutex *, getToCompiledMutex,
	          Properties::NON_VIRTUAL,
	          __OpenThreads_Mutex_P1__getToCompiledMutex,
	          "",
	          "");
	I_Method0(osgUtil::IncrementalCompileOperation::CompileSets &, getToCompile,
	          Properties::NON_VIRTUAL,
	          __CompileSets_R1__getToCompile,
	          "",
	          "");
	I_Method0(OpenThreads::Mutex *, getCompiledMutex,
	          Properties::NON_VIRTUAL,
	          __OpenThreads_Mutex_P1__getCompiledMutex,
	          "",
	          "");
	I_Method0(osgUtil::IncrementalCompileOperation::CompileSets &, getCompiled,
	          Properties::NON_VIRTUAL,
	          __CompileSets_R1__getCompiled,
	          "",
	          "");
	I_SimpleProperty(osgUtil::IncrementalCompileOperation::CompileSets &, Compiled, 
	                 __CompileSets_R1__getCompiled, 
	                 0);
	I_SimpleProperty(OpenThreads::Mutex *, CompiledMutex, 
	                 __OpenThreads_Mutex_P1__getCompiledMutex, 
	                 0);
	I_SimpleProperty(double, ConservativeTimeRatio, 
	                 __double__getConservativeTimeRatio, 
	                 __void__setConservativeTimeRatio__double);
	I_SimpleProperty(double, FlushTimeRatio, 
	                 __double__getFlushTimeRatio, 
	                 __void__setFlushTimeRatio__double);
	I_SimpleProperty(unsigned int, MaximumNumOfObjectsToCompilePerFrame, 
	                 __unsigned_int__getMaximumNumOfObjectsToCompilePerFrame, 
	                 __void__setMaximumNumOfObjectsToCompilePerFrame__unsigned_int);
	I_SimpleProperty(double, MinimumTimeAvailableForGLCompileAndDeletePerFrame, 
	                 __double__getMinimumTimeAvailableForGLCompileAndDeletePerFrame, 
	                 __void__setMinimumTimeAvailableForGLCompileAndDeletePerFrame__double);
	I_SimpleProperty(double, TargetFrameRate, 
	                 __double__getTargetFrameRate, 
	                 __void__setTargetFrameRate__double);
	I_SimpleProperty(osgUtil::IncrementalCompileOperation::CompileSets &, ToCompile, 
	                 __CompileSets_R1__getToCompile, 
	                 0);
	I_SimpleProperty(OpenThreads::Mutex *, ToCompiledMutex, 
	                 __OpenThreads_Mutex_P1__getToCompiledMutex, 
	                 0);
END_REFLECTOR

BEGIN_ABSTRACT_OBJECT_REFLECTOR(osgUtil::IncrementalCompileOperation::CompileCompletedCallback)
	I_DeclaringFile("osgUtil/IncrementalCompileOperation");
	I_BaseType(osg::Referenced);
	I_Constructor0(____CompileCompletedCallback,
	               "",
	               "");
	I_Method1(bool, compileCompleted, IN, osgUtil::IncrementalCompileOperation::CompileSet *, compileSet,
	          Properties::PURE_VIRTUAL,
	          __bool__compileCompleted__CompileSet_P1,
	          "",
	          "");
END_REFLECTOR

TYPE_NAME_ALIAS(std::list< osg::ref_ptr< osg::Drawable > >, osgUtil::IncrementalCompileOperation::CompileData::Drawables)

TYPE_NAME_ALIAS(std::list< osg::ref_ptr< osg::Texture > >, osgUtil::IncrementalCompileOperation::CompileData::Textures)

TYPE_NAME_ALIAS(std::list< osg::ref_ptr< osg::Program > >, osgUtil::IncrementalCompileOperation::CompileData::Programs)

BEGIN_OBJECT_REFLECTOR(osgUtil::IncrementalCompileOperation::CompileData)
	I_DeclaringFile("osgUtil/IncrementalCompileOperation");
	I_BaseType(osg::Referenced);
	I_Constructor0(____CompileData,
	               "",
	               "");
	I_Method0(bool, empty,
	          Properties::NON_VIRTUAL,
	          __bool__empty,
	          "",
	          "");
	I_PublicMemberProperty(osgUtil::IncrementalCompileOperation::CompileData::Drawables, _drawables);
	I_PublicMemberProperty(osgUtil::IncrementalCompileOperation::CompileData::Textures, _textures);
	I_PublicMemberProperty(osgUtil::IncrementalCompileOperation::CompileData::Programs, _programs);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osgUtil::IncrementalCompileOperation::CompileSet)
	I_DeclaringFile("osgUtil/IncrementalCompileOperation");
	I_BaseType(osg::Referenced);
	I_Constructor0(____CompileSet,
	               "",
	               "");
	I_Constructor1(IN, osg::Node *, subgraphToCompile,
	               Properties::NON_EXPLICIT,
	               ____CompileSet__osg_Node_P1,
	               "",
	               "");
	I_Constructor2(IN, osg::Group *, attachmentPoint, IN, osg::Node *, subgraphToCompile,
	               ____CompileSet__osg_Group_P1__osg_Node_P1,
	               "",
	               "");
	I_MethodWithDefaults2(void, buildCompileMap, IN, osgUtil::IncrementalCompileOperation::ContextSet &, context, , IN, osgUtil::GLObjectsVisitor::Mode, mode, osgUtil::GLObjectsVisitor::COMPILE_DISPLAY_LISTS|osgUtil::GLObjectsVisitor::COMPILE_STATE_ATTRIBUTES,
	                      Properties::NON_VIRTUAL,
	                      __void__buildCompileMap__ContextSet_R1__GLObjectsVisitor_Mode,
	                      "",
	                      "");
	I_Method0(bool, compileCompleted,
	          Properties::NON_VIRTUAL,
	          __bool__compileCompleted,
	          "",
	          "");
	I_PublicMemberProperty(osg::ref_ptr< osg::Group >, _attachmentPoint);
	I_PublicMemberProperty(osg::ref_ptr< osg::Node >, _subgraphToCompile);
	I_PublicMemberProperty(osg::ref_ptr< osgUtil::IncrementalCompileOperation::CompileCompletedCallback >, _compileCompletedCallback);
	I_PublicMemberProperty(osgUtil::IncrementalCompileOperation::CompileMap, _compileMap);
END_REFLECTOR

BEGIN_VALUE_REFLECTOR(osg::ref_ptr< osg::Program >)
	I_DeclaringFile("osg/ref_ptr");
	I_Constructor0(____ref_ptr,
	               "",
	               "");
	I_Constructor1(IN, osg::Program *, ptr,
	               Properties::NON_EXPLICIT,
	               ____ref_ptr__T_P1,
	               "",
	               "");
	I_Constructor1(IN, const osg::ref_ptr< osg::Program > &, rp,
	               Properties::NON_EXPLICIT,
	               ____ref_ptr__C5_ref_ptr_R1,
	               "",
	               "");
	I_Method0(osg::Program *, get,
	          Properties::NON_VIRTUAL,
	          __T_P1__get,
	          "",
	          "");
	I_Method0(bool, valid,
	          Properties::NON_VIRTUAL,
	          __bool__valid,
	          "",
	          "");
	I_Method0(osg::Program *, release,
	          Properties::NON_VIRTUAL,
	          __T_P1__release,
	          "",
	          "");
	I_Method1(void, swap, IN, osg::ref_ptr< osg::Program > &, rp,
	          Properties::NON_VIRTUAL,
	          __void__swap__ref_ptr_R1,
	          "",
	          "");
	I_SimpleProperty(osg::Program *, , 
	                 __T_P1__get, 
	                 0);
END_REFLECTOR

BEGIN_VALUE_REFLECTOR(osg::ref_ptr< osg::Texture >)
	I_DeclaringFile("osg/ref_ptr");
	I_Constructor0(____ref_ptr,
	               "",
	               "");
	I_Constructor1(IN, osg::Texture *, ptr,
	               Properties::NON_EXPLICIT,
	               ____ref_ptr__T_P1,
	               "",
	               "");
	I_Constructor1(IN, const osg::ref_ptr< osg::Texture > &, rp,
	               Properties::NON_EXPLICIT,
	               ____ref_ptr__C5_ref_ptr_R1,
	               "",
	               "");
	I_Method0(osg::Texture *, get,
	          Properties::NON_VIRTUAL,
	          __T_P1__get,
	          "",
	          "");
	I_Method0(bool, valid,
	          Properties::NON_VIRTUAL,
	          __bool__valid,
	          "",
	          "");
	I_Method0(osg::Texture *, release,
	          Properties::NON_VIRTUAL,
	          __T_P1__release,
	          "",
	          "");
	I_Method1(void, swap, IN, osg::ref_ptr< osg::Texture > &, rp,
	          Properties::NON_VIRTUAL,
	          __void__swap__ref_ptr_R1,
	          "",
	          "");
	I_SimpleProperty(osg::Texture *, , 
	                 __T_P1__get, 
	                 0);
END_REFLECTOR

BEGIN_VALUE_REFLECTOR(osg::ref_ptr< osgUtil::IncrementalCompileOperation::CompileSet >)
	I_DeclaringFile("osg/ref_ptr");
	I_Constructor0(____ref_ptr,
	               "",
	               "");
	I_Constructor1(IN, osgUtil::IncrementalCompileOperation::CompileSet *, ptr,
	               Properties::NON_EXPLICIT,
	               ____ref_ptr__T_P1,
	               "",
	               "");
	I_Constructor1(IN, const osg::ref_ptr< osgUtil::IncrementalCompileOperation::CompileSet > &, rp,
	               Properties::NON_EXPLICIT,
	               ____ref_ptr__C5_ref_ptr_R1,
	               "",
	               "");
	I_Method0(osgUtil::IncrementalCompileOperation::CompileSet *, get,
	          Properties::NON_VIRTUAL,
	          __T_P1__get,
	          "",
	          "");
	I_Method0(bool, valid,
	          Properties::NON_VIRTUAL,
	          __bool__valid,
	          "",
	          "");
	I_Method0(osgUtil::IncrementalCompileOperation::CompileSet *, release,
	          Properties::NON_VIRTUAL,
	          __T_P1__release,
	          "",
	          "");
	I_Method1(void, swap, IN, osg::ref_ptr< osgUtil::IncrementalCompileOperation::CompileSet > &, rp,
	          Properties::NON_VIRTUAL,
	          __void__swap__ref_ptr_R1,
	          "",
	          "");
	I_SimpleProperty(osgUtil::IncrementalCompileOperation::CompileSet *, , 
	                 __T_P1__get, 
	                 0);
END_REFLECTOR

STD_LIST_REFLECTOR(std::list< osg::ref_ptr< osg::Drawable > >)

STD_LIST_REFLECTOR(std::list< osg::ref_ptr< osg::Program > >)

STD_LIST_REFLECTOR(std::list< osg::ref_ptr< osg::Texture > >)

STD_LIST_REFLECTOR(std::list< osg::ref_ptr< osgUtil::IncrementalCompileOperation::CompileSet > >)

STD_MAP_REFLECTOR(std::map< osg::GraphicsContext * COMMA  osgUtil::IncrementalCompileOperation::CompileData >)

STD_SET_REFLECTOR(std::set< osg::GraphicsContext * >)
