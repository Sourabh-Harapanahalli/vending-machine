add_executable(BeveragePreferenceService
    BeveragePreferenceService.cpp
    ../../gen-cpp/BeveragePreferenceService.cpp
    ../../gen-cpp/vending_machine_types.cpp
)

target_link_libraries(BeveragePreferenceService
    ${THRIFT_LIBRARIES}
    ${Boost_LIBRARIES}
    thrift
    pthread
)
