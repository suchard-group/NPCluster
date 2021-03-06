#
# Make a version file that includes the MDS version and git revision
#
SET(MDS_PACKAGE_NAME "mds")
SET(MDS_VERSION_MAJOR "0")
SET(MDS_VERSION_MINOR "1")
SET(MDS_VERSION_PATCH "beta")
SET(MDS_VERSION "${MDS_VERSION_MAJOR}.${MDS_VERSION_MINOR}.${MDS_VERSION_PATCH}")
EXECUTE_PROCESS(
    COMMAND git log -1 --format=%h
    WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}
    OUTPUT_VARIABLE GIT_COMMIT_HASH
    OUTPUT_STRIP_TRAILING_WHITESPACE
)

CONFIGURE_FILE(
    ${CMAKE_MODULE_PATH}/version.h.in
    ${CMAKE_SOURCE_DIR}/include/mds/version.h
)
