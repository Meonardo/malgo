#ifndef H_MALGO
#define H_MALGO

#include "miniaudio.h"

#ifdef __cplusplus
extern "C"
{
#endif

    extern void goLogCallback(ma_context *pContext, ma_device *pDevice, char *message);
    void goSetContextConfigCallbacks(ma_context_config *pConfig);

    extern void goDataCallback(ma_device *pDevice, void *pOutput, void *pInput, ma_uint32 frameCount);
    extern void goStopCallback(ma_device *pDevice);
    void goSetDeviceConfigCallbacks(ma_device_config *pConfig);

    extern void setAllowCaptureAutoStreamRouting(ma_device *pDevice, ma_bool8 s);
    extern void setAllowPlaybackAutoStreamRouting(ma_device *pDevice, ma_bool8 s);

    extern int setDeviceMasterVolume(ma_device *pDevice, float volume);

#ifdef __cplusplus
}
#endif

#endif
