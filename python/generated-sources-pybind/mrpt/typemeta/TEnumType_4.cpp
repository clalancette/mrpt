#include <iterator>
#include <memory>
#include <mrpt/maps/COccupancyGridMap3D.h>
#include <mrpt/nav/holonomic/CHolonomicND.h>
#include <mrpt/nav/reactive/CAbstractNavigator.h>
#include <mrpt/slam/CGridMapAligner.h>
#include <mrpt/typemeta/TEnumType.h>
#include <mrpt/vision/types.h>
#include <sstream> // __str__
#include <string>

#include <functional>
#include <pybind11/pybind11.h>
#include <string>
#include <stl_binders.hpp>


#ifndef BINDER_PYBIND11_TYPE_CASTER
	#define BINDER_PYBIND11_TYPE_CASTER
	PYBIND11_DECLARE_HOLDER_TYPE(T, std::shared_ptr<T>)
	PYBIND11_DECLARE_HOLDER_TYPE(T, T*)
	PYBIND11_MAKE_OPAQUE(std::shared_ptr<void>)
#endif

void bind_mrpt_typemeta_TEnumType_4(std::function< pybind11::module &(std::string const &namespace_) > &M)
{
	{ // mrpt::typemeta::internal::bimap file:mrpt/typemeta/TEnumType.h line:22
		pybind11::class_<mrpt::typemeta::internal::bimap<mrpt::maps::COccupancyGridMap3D::TLikelihoodMethod,std::string>, std::shared_ptr<mrpt::typemeta::internal::bimap<mrpt::maps::COccupancyGridMap3D::TLikelihoodMethod,std::string>>> cl(M("mrpt::typemeta::internal"), "bimap_mrpt_maps_COccupancyGridMap3D_TLikelihoodMethod_std_string_t", "");
		cl.def( pybind11::init( [](){ return new mrpt::typemeta::internal::bimap<mrpt::maps::COccupancyGridMap3D::TLikelihoodMethod,std::string>(); } ) );
		cl.def( pybind11::init( [](mrpt::typemeta::internal::bimap<mrpt::maps::COccupancyGridMap3D::TLikelihoodMethod,std::string> const &o){ return new mrpt::typemeta::internal::bimap<mrpt::maps::COccupancyGridMap3D::TLikelihoodMethod,std::string>(o); } ) );
		cl.def_readwrite("m_k2v", &mrpt::typemeta::internal::bimap<mrpt::maps::COccupancyGridMap3D::TLikelihoodMethod,std::string>::m_k2v);
		cl.def_readwrite("m_v2k", &mrpt::typemeta::internal::bimap<mrpt::maps::COccupancyGridMap3D::TLikelihoodMethod,std::string>::m_v2k);
		cl.def("direct", (bool (mrpt::typemeta::internal::bimap<mrpt::maps::COccupancyGridMap3D::TLikelihoodMethod,std::string>::*)(const enum mrpt::maps::COccupancyGridMap3D::TLikelihoodMethod &, std::string &) const) &mrpt::typemeta::internal::bimap<mrpt::maps::COccupancyGridMap3D::TLikelihoodMethod, std::string>::direct, "C++: mrpt::typemeta::internal::bimap<mrpt::maps::COccupancyGridMap3D::TLikelihoodMethod, std::string>::direct(const enum mrpt::maps::COccupancyGridMap3D::TLikelihoodMethod &, std::string &) const --> bool", pybind11::arg("k"), pybind11::arg("out_v"));
		cl.def("inverse", (bool (mrpt::typemeta::internal::bimap<mrpt::maps::COccupancyGridMap3D::TLikelihoodMethod,std::string>::*)(const std::string &, enum mrpt::maps::COccupancyGridMap3D::TLikelihoodMethod &) const) &mrpt::typemeta::internal::bimap<mrpt::maps::COccupancyGridMap3D::TLikelihoodMethod, std::string>::inverse, "C++: mrpt::typemeta::internal::bimap<mrpt::maps::COccupancyGridMap3D::TLikelihoodMethod, std::string>::inverse(const std::string &, enum mrpt::maps::COccupancyGridMap3D::TLikelihoodMethod &) const --> bool", pybind11::arg("v"), pybind11::arg("out_k"));
		cl.def("insert", (void (mrpt::typemeta::internal::bimap<mrpt::maps::COccupancyGridMap3D::TLikelihoodMethod,std::string>::*)(const enum mrpt::maps::COccupancyGridMap3D::TLikelihoodMethod &, const std::string &)) &mrpt::typemeta::internal::bimap<mrpt::maps::COccupancyGridMap3D::TLikelihoodMethod, std::string>::insert, "C++: mrpt::typemeta::internal::bimap<mrpt::maps::COccupancyGridMap3D::TLikelihoodMethod, std::string>::insert(const enum mrpt::maps::COccupancyGridMap3D::TLikelihoodMethod &, const std::string &) --> void", pybind11::arg("k"), pybind11::arg("v"));
		cl.def("assign", (struct mrpt::typemeta::internal::bimap<enum mrpt::maps::COccupancyGridMap3D::TLikelihoodMethod, std::string > & (mrpt::typemeta::internal::bimap<mrpt::maps::COccupancyGridMap3D::TLikelihoodMethod,std::string>::*)(const struct mrpt::typemeta::internal::bimap<enum mrpt::maps::COccupancyGridMap3D::TLikelihoodMethod, std::string > &)) &mrpt::typemeta::internal::bimap<mrpt::maps::COccupancyGridMap3D::TLikelihoodMethod, std::string>::operator=, "C++: mrpt::typemeta::internal::bimap<mrpt::maps::COccupancyGridMap3D::TLikelihoodMethod, std::string>::operator=(const struct mrpt::typemeta::internal::bimap<enum mrpt::maps::COccupancyGridMap3D::TLikelihoodMethod, std::string > &) --> struct mrpt::typemeta::internal::bimap<enum mrpt::maps::COccupancyGridMap3D::TLikelihoodMethod, std::string > &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	{ // mrpt::typemeta::internal::bimap file:mrpt/typemeta/TEnumType.h line:22
		pybind11::class_<mrpt::typemeta::internal::bimap<mrpt::nav::CHolonomicND::TSituations,std::string>, std::shared_ptr<mrpt::typemeta::internal::bimap<mrpt::nav::CHolonomicND::TSituations,std::string>>> cl(M("mrpt::typemeta::internal"), "bimap_mrpt_nav_CHolonomicND_TSituations_std_string_t", "");
		cl.def( pybind11::init( [](){ return new mrpt::typemeta::internal::bimap<mrpt::nav::CHolonomicND::TSituations,std::string>(); } ) );
		cl.def( pybind11::init( [](mrpt::typemeta::internal::bimap<mrpt::nav::CHolonomicND::TSituations,std::string> const &o){ return new mrpt::typemeta::internal::bimap<mrpt::nav::CHolonomicND::TSituations,std::string>(o); } ) );
		cl.def_readwrite("m_k2v", &mrpt::typemeta::internal::bimap<mrpt::nav::CHolonomicND::TSituations,std::string>::m_k2v);
		cl.def_readwrite("m_v2k", &mrpt::typemeta::internal::bimap<mrpt::nav::CHolonomicND::TSituations,std::string>::m_v2k);
		cl.def("direct", (bool (mrpt::typemeta::internal::bimap<mrpt::nav::CHolonomicND::TSituations,std::string>::*)(const enum mrpt::nav::CHolonomicND::TSituations &, std::string &) const) &mrpt::typemeta::internal::bimap<mrpt::nav::CHolonomicND::TSituations, std::string>::direct, "C++: mrpt::typemeta::internal::bimap<mrpt::nav::CHolonomicND::TSituations, std::string>::direct(const enum mrpt::nav::CHolonomicND::TSituations &, std::string &) const --> bool", pybind11::arg("k"), pybind11::arg("out_v"));
		cl.def("inverse", (bool (mrpt::typemeta::internal::bimap<mrpt::nav::CHolonomicND::TSituations,std::string>::*)(const std::string &, enum mrpt::nav::CHolonomicND::TSituations &) const) &mrpt::typemeta::internal::bimap<mrpt::nav::CHolonomicND::TSituations, std::string>::inverse, "C++: mrpt::typemeta::internal::bimap<mrpt::nav::CHolonomicND::TSituations, std::string>::inverse(const std::string &, enum mrpt::nav::CHolonomicND::TSituations &) const --> bool", pybind11::arg("v"), pybind11::arg("out_k"));
		cl.def("insert", (void (mrpt::typemeta::internal::bimap<mrpt::nav::CHolonomicND::TSituations,std::string>::*)(const enum mrpt::nav::CHolonomicND::TSituations &, const std::string &)) &mrpt::typemeta::internal::bimap<mrpt::nav::CHolonomicND::TSituations, std::string>::insert, "C++: mrpt::typemeta::internal::bimap<mrpt::nav::CHolonomicND::TSituations, std::string>::insert(const enum mrpt::nav::CHolonomicND::TSituations &, const std::string &) --> void", pybind11::arg("k"), pybind11::arg("v"));
		cl.def("assign", (struct mrpt::typemeta::internal::bimap<enum mrpt::nav::CHolonomicND::TSituations, std::string > & (mrpt::typemeta::internal::bimap<mrpt::nav::CHolonomicND::TSituations,std::string>::*)(const struct mrpt::typemeta::internal::bimap<enum mrpt::nav::CHolonomicND::TSituations, std::string > &)) &mrpt::typemeta::internal::bimap<mrpt::nav::CHolonomicND::TSituations, std::string>::operator=, "C++: mrpt::typemeta::internal::bimap<mrpt::nav::CHolonomicND::TSituations, std::string>::operator=(const struct mrpt::typemeta::internal::bimap<enum mrpt::nav::CHolonomicND::TSituations, std::string > &) --> struct mrpt::typemeta::internal::bimap<enum mrpt::nav::CHolonomicND::TSituations, std::string > &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	{ // mrpt::typemeta::internal::bimap file:mrpt/typemeta/TEnumType.h line:22
		pybind11::class_<mrpt::typemeta::internal::bimap<mrpt::nav::CAbstractNavigator::TState,std::string>, std::shared_ptr<mrpt::typemeta::internal::bimap<mrpt::nav::CAbstractNavigator::TState,std::string>>> cl(M("mrpt::typemeta::internal"), "bimap_mrpt_nav_CAbstractNavigator_TState_std_string_t", "");
		cl.def( pybind11::init( [](){ return new mrpt::typemeta::internal::bimap<mrpt::nav::CAbstractNavigator::TState,std::string>(); } ) );
		cl.def( pybind11::init( [](mrpt::typemeta::internal::bimap<mrpt::nav::CAbstractNavigator::TState,std::string> const &o){ return new mrpt::typemeta::internal::bimap<mrpt::nav::CAbstractNavigator::TState,std::string>(o); } ) );
		cl.def_readwrite("m_k2v", &mrpt::typemeta::internal::bimap<mrpt::nav::CAbstractNavigator::TState,std::string>::m_k2v);
		cl.def_readwrite("m_v2k", &mrpt::typemeta::internal::bimap<mrpt::nav::CAbstractNavigator::TState,std::string>::m_v2k);
		cl.def("direct", (bool (mrpt::typemeta::internal::bimap<mrpt::nav::CAbstractNavigator::TState,std::string>::*)(const enum mrpt::nav::CAbstractNavigator::TState &, std::string &) const) &mrpt::typemeta::internal::bimap<mrpt::nav::CAbstractNavigator::TState, std::string>::direct, "C++: mrpt::typemeta::internal::bimap<mrpt::nav::CAbstractNavigator::TState, std::string>::direct(const enum mrpt::nav::CAbstractNavigator::TState &, std::string &) const --> bool", pybind11::arg("k"), pybind11::arg("out_v"));
		cl.def("inverse", (bool (mrpt::typemeta::internal::bimap<mrpt::nav::CAbstractNavigator::TState,std::string>::*)(const std::string &, enum mrpt::nav::CAbstractNavigator::TState &) const) &mrpt::typemeta::internal::bimap<mrpt::nav::CAbstractNavigator::TState, std::string>::inverse, "C++: mrpt::typemeta::internal::bimap<mrpt::nav::CAbstractNavigator::TState, std::string>::inverse(const std::string &, enum mrpt::nav::CAbstractNavigator::TState &) const --> bool", pybind11::arg("v"), pybind11::arg("out_k"));
		cl.def("insert", (void (mrpt::typemeta::internal::bimap<mrpt::nav::CAbstractNavigator::TState,std::string>::*)(const enum mrpt::nav::CAbstractNavigator::TState &, const std::string &)) &mrpt::typemeta::internal::bimap<mrpt::nav::CAbstractNavigator::TState, std::string>::insert, "C++: mrpt::typemeta::internal::bimap<mrpt::nav::CAbstractNavigator::TState, std::string>::insert(const enum mrpt::nav::CAbstractNavigator::TState &, const std::string &) --> void", pybind11::arg("k"), pybind11::arg("v"));
		cl.def("assign", (struct mrpt::typemeta::internal::bimap<enum mrpt::nav::CAbstractNavigator::TState, std::string > & (mrpt::typemeta::internal::bimap<mrpt::nav::CAbstractNavigator::TState,std::string>::*)(const struct mrpt::typemeta::internal::bimap<enum mrpt::nav::CAbstractNavigator::TState, std::string > &)) &mrpt::typemeta::internal::bimap<mrpt::nav::CAbstractNavigator::TState, std::string>::operator=, "C++: mrpt::typemeta::internal::bimap<mrpt::nav::CAbstractNavigator::TState, std::string>::operator=(const struct mrpt::typemeta::internal::bimap<enum mrpt::nav::CAbstractNavigator::TState, std::string > &) --> struct mrpt::typemeta::internal::bimap<enum mrpt::nav::CAbstractNavigator::TState, std::string > &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	{ // mrpt::typemeta::internal::bimap file:mrpt/typemeta/TEnumType.h line:22
		pybind11::class_<mrpt::typemeta::internal::bimap<mrpt::vision::TKeyPointMethod,std::string>, std::shared_ptr<mrpt::typemeta::internal::bimap<mrpt::vision::TKeyPointMethod,std::string>>> cl(M("mrpt::typemeta::internal"), "bimap_mrpt_vision_TKeyPointMethod_std_string_t", "");
		cl.def( pybind11::init( [](){ return new mrpt::typemeta::internal::bimap<mrpt::vision::TKeyPointMethod,std::string>(); } ) );
		cl.def( pybind11::init( [](mrpt::typemeta::internal::bimap<mrpt::vision::TKeyPointMethod,std::string> const &o){ return new mrpt::typemeta::internal::bimap<mrpt::vision::TKeyPointMethod,std::string>(o); } ) );
		cl.def_readwrite("m_k2v", &mrpt::typemeta::internal::bimap<mrpt::vision::TKeyPointMethod,std::string>::m_k2v);
		cl.def_readwrite("m_v2k", &mrpt::typemeta::internal::bimap<mrpt::vision::TKeyPointMethod,std::string>::m_v2k);
		cl.def("direct", (bool (mrpt::typemeta::internal::bimap<mrpt::vision::TKeyPointMethod,std::string>::*)(const enum mrpt::vision::TKeyPointMethod &, std::string &) const) &mrpt::typemeta::internal::bimap<mrpt::vision::TKeyPointMethod, std::string>::direct, "C++: mrpt::typemeta::internal::bimap<mrpt::vision::TKeyPointMethod, std::string>::direct(const enum mrpt::vision::TKeyPointMethod &, std::string &) const --> bool", pybind11::arg("k"), pybind11::arg("out_v"));
		cl.def("inverse", (bool (mrpt::typemeta::internal::bimap<mrpt::vision::TKeyPointMethod,std::string>::*)(const std::string &, enum mrpt::vision::TKeyPointMethod &) const) &mrpt::typemeta::internal::bimap<mrpt::vision::TKeyPointMethod, std::string>::inverse, "C++: mrpt::typemeta::internal::bimap<mrpt::vision::TKeyPointMethod, std::string>::inverse(const std::string &, enum mrpt::vision::TKeyPointMethod &) const --> bool", pybind11::arg("v"), pybind11::arg("out_k"));
		cl.def("insert", (void (mrpt::typemeta::internal::bimap<mrpt::vision::TKeyPointMethod,std::string>::*)(const enum mrpt::vision::TKeyPointMethod &, const std::string &)) &mrpt::typemeta::internal::bimap<mrpt::vision::TKeyPointMethod, std::string>::insert, "C++: mrpt::typemeta::internal::bimap<mrpt::vision::TKeyPointMethod, std::string>::insert(const enum mrpt::vision::TKeyPointMethod &, const std::string &) --> void", pybind11::arg("k"), pybind11::arg("v"));
		cl.def("assign", (struct mrpt::typemeta::internal::bimap<enum mrpt::vision::TKeyPointMethod, std::string > & (mrpt::typemeta::internal::bimap<mrpt::vision::TKeyPointMethod,std::string>::*)(const struct mrpt::typemeta::internal::bimap<enum mrpt::vision::TKeyPointMethod, std::string > &)) &mrpt::typemeta::internal::bimap<mrpt::vision::TKeyPointMethod, std::string>::operator=, "C++: mrpt::typemeta::internal::bimap<mrpt::vision::TKeyPointMethod, std::string>::operator=(const struct mrpt::typemeta::internal::bimap<enum mrpt::vision::TKeyPointMethod, std::string > &) --> struct mrpt::typemeta::internal::bimap<enum mrpt::vision::TKeyPointMethod, std::string > &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	{ // mrpt::typemeta::internal::bimap file:mrpt/typemeta/TEnumType.h line:22
		pybind11::class_<mrpt::typemeta::internal::bimap<mrpt::vision::TDescriptorType,std::string>, std::shared_ptr<mrpt::typemeta::internal::bimap<mrpt::vision::TDescriptorType,std::string>>> cl(M("mrpt::typemeta::internal"), "bimap_mrpt_vision_TDescriptorType_std_string_t", "");
		cl.def( pybind11::init( [](){ return new mrpt::typemeta::internal::bimap<mrpt::vision::TDescriptorType,std::string>(); } ) );
		cl.def( pybind11::init( [](mrpt::typemeta::internal::bimap<mrpt::vision::TDescriptorType,std::string> const &o){ return new mrpt::typemeta::internal::bimap<mrpt::vision::TDescriptorType,std::string>(o); } ) );
		cl.def_readwrite("m_k2v", &mrpt::typemeta::internal::bimap<mrpt::vision::TDescriptorType,std::string>::m_k2v);
		cl.def_readwrite("m_v2k", &mrpt::typemeta::internal::bimap<mrpt::vision::TDescriptorType,std::string>::m_v2k);
		cl.def("direct", (bool (mrpt::typemeta::internal::bimap<mrpt::vision::TDescriptorType,std::string>::*)(const enum mrpt::vision::TDescriptorType &, std::string &) const) &mrpt::typemeta::internal::bimap<mrpt::vision::TDescriptorType, std::string>::direct, "C++: mrpt::typemeta::internal::bimap<mrpt::vision::TDescriptorType, std::string>::direct(const enum mrpt::vision::TDescriptorType &, std::string &) const --> bool", pybind11::arg("k"), pybind11::arg("out_v"));
		cl.def("inverse", (bool (mrpt::typemeta::internal::bimap<mrpt::vision::TDescriptorType,std::string>::*)(const std::string &, enum mrpt::vision::TDescriptorType &) const) &mrpt::typemeta::internal::bimap<mrpt::vision::TDescriptorType, std::string>::inverse, "C++: mrpt::typemeta::internal::bimap<mrpt::vision::TDescriptorType, std::string>::inverse(const std::string &, enum mrpt::vision::TDescriptorType &) const --> bool", pybind11::arg("v"), pybind11::arg("out_k"));
		cl.def("insert", (void (mrpt::typemeta::internal::bimap<mrpt::vision::TDescriptorType,std::string>::*)(const enum mrpt::vision::TDescriptorType &, const std::string &)) &mrpt::typemeta::internal::bimap<mrpt::vision::TDescriptorType, std::string>::insert, "C++: mrpt::typemeta::internal::bimap<mrpt::vision::TDescriptorType, std::string>::insert(const enum mrpt::vision::TDescriptorType &, const std::string &) --> void", pybind11::arg("k"), pybind11::arg("v"));
		cl.def("assign", (struct mrpt::typemeta::internal::bimap<enum mrpt::vision::TDescriptorType, std::string > & (mrpt::typemeta::internal::bimap<mrpt::vision::TDescriptorType,std::string>::*)(const struct mrpt::typemeta::internal::bimap<enum mrpt::vision::TDescriptorType, std::string > &)) &mrpt::typemeta::internal::bimap<mrpt::vision::TDescriptorType, std::string>::operator=, "C++: mrpt::typemeta::internal::bimap<mrpt::vision::TDescriptorType, std::string>::operator=(const struct mrpt::typemeta::internal::bimap<enum mrpt::vision::TDescriptorType, std::string > &) --> struct mrpt::typemeta::internal::bimap<enum mrpt::vision::TDescriptorType, std::string > &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
	{ // mrpt::typemeta::internal::bimap file:mrpt/typemeta/TEnumType.h line:22
		pybind11::class_<mrpt::typemeta::internal::bimap<mrpt::slam::CGridMapAligner::TAlignerMethod,std::string>, std::shared_ptr<mrpt::typemeta::internal::bimap<mrpt::slam::CGridMapAligner::TAlignerMethod,std::string>>> cl(M("mrpt::typemeta::internal"), "bimap_mrpt_slam_CGridMapAligner_TAlignerMethod_std_string_t", "");
		cl.def( pybind11::init( [](){ return new mrpt::typemeta::internal::bimap<mrpt::slam::CGridMapAligner::TAlignerMethod,std::string>(); } ) );
		cl.def( pybind11::init( [](mrpt::typemeta::internal::bimap<mrpt::slam::CGridMapAligner::TAlignerMethod,std::string> const &o){ return new mrpt::typemeta::internal::bimap<mrpt::slam::CGridMapAligner::TAlignerMethod,std::string>(o); } ) );
		cl.def_readwrite("m_k2v", &mrpt::typemeta::internal::bimap<mrpt::slam::CGridMapAligner::TAlignerMethod,std::string>::m_k2v);
		cl.def_readwrite("m_v2k", &mrpt::typemeta::internal::bimap<mrpt::slam::CGridMapAligner::TAlignerMethod,std::string>::m_v2k);
		cl.def("direct", (bool (mrpt::typemeta::internal::bimap<mrpt::slam::CGridMapAligner::TAlignerMethod,std::string>::*)(const enum mrpt::slam::CGridMapAligner::TAlignerMethod &, std::string &) const) &mrpt::typemeta::internal::bimap<mrpt::slam::CGridMapAligner::TAlignerMethod, std::string>::direct, "C++: mrpt::typemeta::internal::bimap<mrpt::slam::CGridMapAligner::TAlignerMethod, std::string>::direct(const enum mrpt::slam::CGridMapAligner::TAlignerMethod &, std::string &) const --> bool", pybind11::arg("k"), pybind11::arg("out_v"));
		cl.def("inverse", (bool (mrpt::typemeta::internal::bimap<mrpt::slam::CGridMapAligner::TAlignerMethod,std::string>::*)(const std::string &, enum mrpt::slam::CGridMapAligner::TAlignerMethod &) const) &mrpt::typemeta::internal::bimap<mrpt::slam::CGridMapAligner::TAlignerMethod, std::string>::inverse, "C++: mrpt::typemeta::internal::bimap<mrpt::slam::CGridMapAligner::TAlignerMethod, std::string>::inverse(const std::string &, enum mrpt::slam::CGridMapAligner::TAlignerMethod &) const --> bool", pybind11::arg("v"), pybind11::arg("out_k"));
		cl.def("insert", (void (mrpt::typemeta::internal::bimap<mrpt::slam::CGridMapAligner::TAlignerMethod,std::string>::*)(const enum mrpt::slam::CGridMapAligner::TAlignerMethod &, const std::string &)) &mrpt::typemeta::internal::bimap<mrpt::slam::CGridMapAligner::TAlignerMethod, std::string>::insert, "C++: mrpt::typemeta::internal::bimap<mrpt::slam::CGridMapAligner::TAlignerMethod, std::string>::insert(const enum mrpt::slam::CGridMapAligner::TAlignerMethod &, const std::string &) --> void", pybind11::arg("k"), pybind11::arg("v"));
		cl.def("assign", (struct mrpt::typemeta::internal::bimap<enum mrpt::slam::CGridMapAligner::TAlignerMethod, std::string > & (mrpt::typemeta::internal::bimap<mrpt::slam::CGridMapAligner::TAlignerMethod,std::string>::*)(const struct mrpt::typemeta::internal::bimap<enum mrpt::slam::CGridMapAligner::TAlignerMethod, std::string > &)) &mrpt::typemeta::internal::bimap<mrpt::slam::CGridMapAligner::TAlignerMethod, std::string>::operator=, "C++: mrpt::typemeta::internal::bimap<mrpt::slam::CGridMapAligner::TAlignerMethod, std::string>::operator=(const struct mrpt::typemeta::internal::bimap<enum mrpt::slam::CGridMapAligner::TAlignerMethod, std::string > &) --> struct mrpt::typemeta::internal::bimap<enum mrpt::slam::CGridMapAligner::TAlignerMethod, std::string > &", pybind11::return_value_policy::automatic, pybind11::arg(""));
	}
}
