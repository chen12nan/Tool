#ifndef DATETIME_GLOBAL_H
#define DATETIME_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(DATETIME_LIBRARY)
#  define DATETIMESHARED_EXPORT Q_DECL_EXPORT
#else
#  define DATETIMESHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // DATETIME_GLOBAL_H
