# ===== config =====

# 项目名
set(PRO_NAME hellow)



include_directories(${CMAKE_SOURCE_DIR}/wid)

# 源文件
set(PRO_SRC_FILES 
    wid/widget.cpp
    main.cpp
)


# == Qt 配置 ==
# 发现模块
find_package(Qt5 COMPONENTS
        Core
        Gui
        Widgets
        REQUIRED)

# Qt 模块
set(PRO_QT_MODULE Qt5::Widgets)

# Qt 库路径
set(CMAKE_PREFIX_PATH $ENV{Qt5_DIR})
# == Qt 配置 ==






# == 固定配置 ==
# CMake 最小版本
set(PRO_VERSION_CMAKE 3.22.1)

# C++ 11 版本
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS ON)

# 调试模式
set(CMAKE_BUILD_TYPE "Debug")
# set(CMAKE_BUILD_TYPE "Release")
# == 固定配置 ==





# ===== fix =====

# 项目名
cmake_minimum_required(VERSION ${PRO_VERSION_CMAKE})
project(${PRO_NAME})


# 开启自动编译
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)


# 生成目标
add_executable(${PRO_NAME} ${PRO_SRC_FILES})

# 链接库
target_link_libraries(${PRO_NAME} ${PRO_QT_MODULE})


