set(NAME Peripherals)

aux_source_directory(${CMAKE_CURRENT_LIST_DIR} SOURCE)

add_library(${NAME} STATIC ${SOURCE})

target_include_directories(${NAME}
        PUBLIC ${CMAKE_CURRENT_LIST_DIR}
        )

target_link_libraries(${NAME}
        Include_Files
        OBC
        System
        Utils
        BME280_Compensation
        )
