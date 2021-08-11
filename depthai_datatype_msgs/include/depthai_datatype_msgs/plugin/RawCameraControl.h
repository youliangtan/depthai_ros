#include <depthai_common_msgs/msgpack.hpp>

#include <depthai-shared/datatype/RawCameraControl.hpp>

MSGPACK_ADD_ENUM(dai::RawCameraControl::AutoFocusMode);
MSGPACK_ADD_ENUM(dai::RawCameraControl::AutoWhiteBalanceMode);
MSGPACK_ADD_ENUM(dai::RawCameraControl::SceneMode);
MSGPACK_ADD_ENUM(dai::RawCameraControl::AntiBandingMode);
MSGPACK_ADD_ENUM(dai::RawCameraControl::EffectMode);
MSGPACK_ADD_ENUM(dai::RawCameraControl::Command);
MSGPACK_ADD_ENUM(dai::RawCameraControl::ControlMode);
MSGPACK_ADD_ENUM(dai::RawCameraControl::CaptureIntent);

#define DEPTHAI_DATATYPE_MSGS_MESSAGE_RAWCAMERACONTROL_PLUGIN_CLASS_BODY \
    MSGPACK_DEFINE(\
        aeLockMode,\
        aeRegion,\
        afRegion,\
        antiBandingMode,\
        autoFocusMode,\
        awbLockMode,\
        awbMode,\
        brightness,\
        chromaDenoise,\
        cmdMask,\
        contrast,\
        effectMode,\
        expCompensation,\
        expManual,\
        lensPosition,\
        lumaDenoise,\
        saturation,\
        sceneMode,\
        sharpness\
    )
