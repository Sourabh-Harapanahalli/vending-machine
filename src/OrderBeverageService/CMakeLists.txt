add_executable(
    OrderBeverageService
    OrderBeverageService.cpp
    ${THRIFT_GEN_CPP_DIR}/OrderBeverageService.cpp
    ${THRIFT_GEN_CPP_DIR}/WeatherService.cpp
    ${THRIFT_GEN_CPP_DIR}/BeveragePreferenceService.cpp  # ✅ Add this line
    ${THRIFT_GEN_CPP_DIR}/vending_machine_types.cpp
)

target_include_directories(
    OrderBeverageService PRIVATE
    ${THRIFT_GEN_CPP_DIR}  # ✅ Add include path for generated headers
)

target_link_libraries(
    OrderBeverageService
    nlohmann_json::nlohmann_json
    ${THRIFT_LIB}
    ${CMAKE_THREAD_LIBS_INIT}
    ${Boost_LIBRARIES}
    thrift
    pthread
    Boost::log
    Boost::log_setup
)

install(TARGETS OrderBeverageService DESTINATION ./)
