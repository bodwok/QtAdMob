#ifndef QTADMOBBANNER
#define QTADMOBBANNER

#include "QtAdMobBannerAndroid.h"
#include "QtAdMobBannerIos.h"
#include "QtAdMobBannerDummy.h"

class QWidget;

inline IQtAdMobBanner* CreateQtAdMobBanner()
{
#if (__ANDROID_API__ >= 9)
    return new QtAdMobBannerAndroid();
#elif (TARGET_OS_IPHONE || TARGET_IPHONE_SIMULATOR)
    return new QtAdMobBannerIos();
#else
    return new QtAdMobBannerDummy();
#endif
}

#endif // QTADMOBBANNER

