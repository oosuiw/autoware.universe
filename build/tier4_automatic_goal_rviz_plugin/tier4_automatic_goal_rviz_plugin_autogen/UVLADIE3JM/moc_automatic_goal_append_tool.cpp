/****************************************************************************
** Meta object code from reading C++ file 'automatic_goal_append_tool.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../src/universe/autoware.universe/common/tier4_automatic_goal_rviz_plugin/src/automatic_goal_append_tool.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'automatic_goal_append_tool.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_rviz_plugins__AutowareAutomaticGoalTool_t {
    QByteArrayData data[3];
    char stringdata0[53];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_rviz_plugins__AutowareAutomaticGoalTool_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_rviz_plugins__AutowareAutomaticGoalTool_t qt_meta_stringdata_rviz_plugins__AutowareAutomaticGoalTool = {
    {
QT_MOC_LITERAL(0, 0, 39), // "rviz_plugins::AutowareAutomat..."
QT_MOC_LITERAL(1, 40, 11), // "updateTopic"
QT_MOC_LITERAL(2, 52, 0) // ""

    },
    "rviz_plugins::AutowareAutomaticGoalTool\0"
    "updateTopic\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_rviz_plugins__AutowareAutomaticGoalTool[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void rviz_plugins::AutowareAutomaticGoalTool::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AutowareAutomaticGoalTool *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->updateTopic(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject rviz_plugins::AutowareAutomaticGoalTool::staticMetaObject = { {
    QMetaObject::SuperData::link<rviz_default_plugins::tools::PoseTool::staticMetaObject>(),
    qt_meta_stringdata_rviz_plugins__AutowareAutomaticGoalTool.data,
    qt_meta_data_rviz_plugins__AutowareAutomaticGoalTool,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *rviz_plugins::AutowareAutomaticGoalTool::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *rviz_plugins::AutowareAutomaticGoalTool::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_rviz_plugins__AutowareAutomaticGoalTool.stringdata0))
        return static_cast<void*>(this);
    return rviz_default_plugins::tools::PoseTool::qt_metacast(_clname);
}

int rviz_plugins::AutowareAutomaticGoalTool::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = rviz_default_plugins::tools::PoseTool::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
