cc_binary(
    name="main",
    srcs = ["main.cpp"],
    deps = [
        "compileUser"
    ],
)

cc_library(
    name = "compileUser",
    srcs = ["int/user/user.cpp"],
    hdrs = [
        "lib/outside/outside_header.h",
        "int/user/user.h"
        ],
)