#ifndef SQLCOMPONENT_GLOBAL_H
#define SQLCOMPONENT_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(SQLCOMPONENT_LIBRARY)
#  define SQLCOMPONENTSHARED_EXPORT Q_DECL_EXPORT
#else
#  define SQLCOMPONENTSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // SQLCOMPONENT_GLOBAL_H
