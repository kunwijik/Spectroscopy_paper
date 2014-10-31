/*
 * Module code.
 *
 * Generated by SIP 4.16.3 on Mon Sep 22 17:44:20 2014
 *
 * Copyright (c) 2014 Riverbank Computing Limited <info@riverbankcomputing.com>
 * 
 * This file is part of PyQt.
 * 
 * This file may be used under the terms of the GNU General Public
 * License versions 2.0 or 3.0 as published by the Free Software
 * Foundation and appearing in the files LICENSE.GPL2 and LICENSE.GPL3
 * included in the packaging of this file.  Alternatively you may (at
 * your option) use any later version of the GNU General Public
 * License if such license has been publicly approved by Riverbank
 * Computing Limited (or its successors, if any) and the KDE Free Qt
 * Foundation. In addition, as a special exception, Riverbank gives you
 * certain additional rights. These rights are described in the Riverbank
 * GPL Exception version 1.1, which can be found in the file
 * GPL_EXCEPTION.txt in this package.
 * 
 * If you are unsure which license is appropriate for your use, please
 * contact the sales department at sales@riverbankcomputing.com.
 * 
 * This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
 * WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

#include "sipAPIQtTest.h"


/* Define the strings used by this module. */
const char sipStrings_QtTest[] = {
    'q', 'W', 'a', 'i', 't', 'F', 'o', 'r', 'W', 'i', 'n', 'd', 'o', 'w', 'S', 'h', 'o', 'w', 'n', 0,
    'd', 'e', 'f', 'a', 'u', 'l', 't', 'B', 'u', 't', 't', 'o', 'n', 'N', 'u', 'm', 'b', 'e', 'r', 0,
    'Q', 'T', 'e', 's', 't', ':', ':', 'M', 'o', 'u', 's', 'e', 'A', 'c', 't', 'i', 'o', 'n', 0,
    'e', 's', 'c', 'a', 'p', 'e', 'B', 'u', 't', 't', 'o', 'n', 'N', 'u', 'm', 'b', 'e', 'r', 0,
    'Q', 'T', 'e', 's', 't', ':', ':', 'K', 'e', 'y', 'A', 'c', 't', 'i', 'o', 'n', 0,
    'a', 's', 'p', 'e', 'c', 't', 'R', 'a', 't', 'i', 'o', 'M', 'o', 'd', 'e', 0,
    'd', 'e', 'v', 'i', 'c', 'e', 'T', 'r', 'a', 'n', 's', 'f', 'o', 'r', 'm', 0,
    's', 'e', 'l', 'e', 'c', 't', 'e', 'd', 'F', 'i', 'l', 't', 'e', 'r', 0,
    'c', 'h', 'a', 'n', 'g', 'e', 'd', 'S', 'i', 'g', 'n', 'a', 'l', 0,
    't', 'r', 'a', 'n', 's', 'f', 'o', 'r', 'm', 'M', 'o', 'd', 'e', 0,
    'm', 'o', 'u', 's', 'e', 'R', 'e', 'l', 'e', 'a', 's', 'e', 0,
    'M', 'o', 'u', 's', 'e', 'R', 'e', 'l', 'e', 'a', 's', 'e', 0,
    's', 'o', 'u', 'r', 'c', 'e', 'R', 'e', 'g', 'i', 'o', 'n', 0,
    't', 'a', 'r', 'g', 'e', 't', 'O', 'f', 'f', 's', 'e', 't', 0,
    'b', 'o', 'u', 'n', 'd', 'i', 'n', 'g', 'R', 'e', 'c', 't', 0,
    'm', 'i', 'd', 'L', 'i', 'n', 'e', 'W', 'i', 'd', 't', 'h', 0,
    'P', 'y', 'Q', 't', '4', '.', 'Q', 't', 'T', 'e', 's', 't', 0,
    'm', 'o', 'u', 's', 'e', 'D', 'C', 'l', 'i', 'c', 'k', 0,
    'M', 'o', 'u', 's', 'e', 'D', 'C', 'l', 'i', 'c', 'k', 0,
    'b', 'u', 't', 't', 'o', 'n', '2', 'T', 'e', 'x', 't', 0,
    'b', 'u', 't', 't', 'o', 'n', '1', 'T', 'e', 'x', 't', 0,
    'm', 'o', 'u', 's', 'e', 'P', 'r', 'e', 's', 's', 0,
    'm', 'o', 'u', 's', 'e', 'C', 'l', 'i', 'c', 'k', 0,
    'M', 'o', 'u', 's', 'e', 'C', 'l', 'i', 'c', 'k', 0,
    'M', 'o', 'u', 's', 'e', 'P', 'r', 'e', 's', 's', 0,
    'k', 'e', 'y', 'R', 'e', 'l', 'e', 'a', 's', 'e', 0,
    'm', 'o', 'u', 's', 'e', 'E', 'v', 'e', 'n', 't', 0,
    'f', 'i', 'e', 'l', 'd', 'W', 'i', 'd', 't', 'h', 0,
    'm', 'o', 'u', 's', 'e', 'M', 'o', 'v', 'e', 0,
    'k', 'e', 'y', 'C', 'l', 'i', 'c', 'k', 's', 0,
    'o', 'p', 'e', 'r', 'a', 't', 'i', 'o', 'n', 0,
    'l', 'i', 'n', 'e', 'W', 'i', 'd', 't', 'h', 0,
    'd', 'i', 'r', 'e', 'c', 't', 'o', 'r', 'y', 0,
    'a', 'l', 'i', 'g', 'n', 'm', 'e', 'n', 't', 0,
    'M', 'o', 'u', 's', 'e', 'M', 'o', 'v', 'e', 0,
    'p', 'r', 'e', 'c', 'i', 's', 'i', 'o', 'n', 0,
    'k', 'e', 'y', 'P', 'r', 'e', 's', 's', 0,
    'k', 'e', 'y', 'C', 'l', 'i', 'c', 'k', 0,
    'm', 'o', 'd', 'i', 'f', 'i', 'e', 'r', 0,
    'k', 'e', 'y', 'E', 'v', 'e', 'n', 't', 0,
    'f', 'i', 'l', 'l', 'R', 'u', 'l', 'e', 0,
    't', 'a', 'b', 'A', 'r', 'r', 'a', 'y', 0,
    't', 'a', 'b', 'S', 't', 'o', 'p', 's', 0,
    'u', 's', 'e', 'r', 'D', 'a', 't', 'a', 0,
    's', 'h', 'o', 'r', 't', 'c', 'u', 't', 0,
    'b', 'e', 'h', 'a', 'v', 'i', 'o', 'r', 0,
    'p', 'o', 's', 'i', 't', 'i', 'o', 'n', 0,
    'f', 'i', 'l', 'l', 'C', 'h', 'a', 'r', 0,
    'p', 'r', 'o', 'p', 'e', 'r', 't', 'y', 0,
    'e', 'x', 'p', 'o', 's', 'e', 'd', 0,
    'b', 'u', 't', 't', 'o', 'n', '2', 0,
    'b', 'u', 't', 't', 'o', 'n', '1', 0,
    'q', 'u', 'a', 'l', 'i', 't', 'y', 0,
    'y', 'M', 'a', 'r', 'g', 'i', 'n', 0,
    'x', 'M', 'a', 'r', 'g', 'i', 'n', 0,
    'c', 'a', 'p', 't', 'i', 'o', 'n', 0,
    'o', 'p', 't', 'i', 'o', 'n', 's', 0,
    'f', 'i', 'l', 't', 'e', 'r', 's', 0,
    'q', 'S', 'l', 'e', 'e', 'p', 0,
    'y', 'R', 'o', 'u', 'n', 'd', 0,
    'x', 'R', 'o', 'u', 'n', 'd', 0,
    'l', 'a', 'y', 'e', 'r', 's', 0,
    's', 'u', 'n', 'k', 'e', 'n', 0,
    'o', 'p', 't', 'i', 'o', 'n', 0,
    'p', 'r', 'o', 'p', 'e', 'r', 0,
    'v', 'a', 'l', 'u', 'e', '9', 0,
    'v', 'a', 'l', 'u', 'e', '8', 0,
    'v', 'a', 'l', 'u', 'e', '7', 0,
    'v', 'a', 'l', 'u', 'e', '6', 0,
    'v', 'a', 'l', 'u', 'e', '5', 0,
    'v', 'a', 'l', 'u', 'e', '4', 0,
    'v', 'a', 'l', 'u', 'e', '3', 0,
    'v', 'a', 'l', 'u', 'e', '0', 0,
    's', 'y', 'm', 'b', 'o', 'l', 0,
    's', 'u', 'f', 'f', 'i', 'x', 0,
    'p', 'r', 'e', 'f', 'i', 'x', 0,
    'f', 'o', 'r', 'm', 'a', 't', 0,
    'v', 'a', 'l', 'u', 'e', '2', 0,
    'v', 'a', 'l', 'u', 'e', '1', 0,
    'a', 'c', 't', 'i', 'o', 'n', 0,
    'c', 'o', 'l', 'u', 'm', 'n', 0,
    'f', 'i', 'l', 't', 'e', 'r', 0,
    'p', 'a', 'r', 'e', 'n', 't', 0,
    'q', 'W', 'a', 'i', 't', 0,
    'Q', 'T', 'e', 's', 't', 0,
    'b', 'r', 'u', 's', 'h', 0,
    'd', 'e', 'l', 'a', 'y', 0,
    'h', 'i', 'n', 't', 's', 0,
    'f', 'l', 'a', 'g', 's', 0,
    'm', 's', 'e', 'c', 's', 0,
    's', 't', 'a', 't', 'e', 0,
    'm', 'o', 'd', 'e', 0,
    'n', 'a', 'm', 'e', 0,
    'b', 'a', 's', 'e', 0,
    'f', 'i', 'l', 'l', 0,
    'f', 'r', 'o', 'm', 0,
    's', 'o', 'r', 't', 0,
    'p', 'e', 'n', 0,
    'e', 'n', 'd', 0,
    'p', 'o', 's', 0,
    's', 'w', 0,
    's', 'y', 0,
    's', 'x', 0,
};
static sipEnumTypeDef enumTypes[] = {
    {{-1, 0, 0, SIP_TYPE_ENUM, sipNameNr_QTest__MouseAction, {0}}, sipNameNr_MouseAction, 0, NULL},
    {{-1, 0, 0, SIP_TYPE_ENUM, sipNameNr_QTest__KeyAction, {0}}, sipNameNr_KeyAction, 0, NULL},
};


/*
 * This defines each type in this module.
 */
static sipTypeDef *typesTable[] = {
    &sipTypeDef_QtTest_QTest.super.ctd_base,
    &enumTypes[1].etd_base,
    &enumTypes[0].etd_base,
};


/* This defines the modules that this module needs to import. */
static sipImportedModuleDef importsTable[] = {
    {"PyQt4.QtCore", 1, NULL},
    {"PyQt4.QtGui", -1, NULL},
    {NULL, -1, NULL}
};


/* This defines this module. */
sipExportedModuleDef sipModuleAPI_QtTest = {
    0,
    SIP_API_MINOR_NR,
    sipNameNr_PyQt4_QtTest,
    0,
    -1,
    sipStrings_QtTest,
    importsTable,
    NULL,
    3,
    typesTable,
    NULL,
    0,
    NULL,
    0,
    NULL,
    NULL,
    NULL,
    NULL,
    {NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL},
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL
};


/* The SIP API and the APIs of any imported modules. */
const sipAPIDef *sipAPI_QtTest;
const sipExportedModuleDef *sipModuleAPI_QtTest_QtCore;
const sipExportedModuleDef *sipModuleAPI_QtTest_QtGui;

sip_qt_metaobject_func sip_QtTest_qt_metaobject;
sip_qt_metacall_func sip_QtTest_qt_metacall;
sip_qt_metacast_func sip_QtTest_qt_metacast;


/* The Python module initialisation function. */
#if PY_MAJOR_VERSION >= 3
#define SIP_MODULE_ENTRY        PyInit_QtTest
#define SIP_MODULE_TYPE         PyObject *
#define SIP_MODULE_DISCARD(r)   Py_DECREF(r)
#define SIP_MODULE_RETURN(r)    return (r)
#else
#define SIP_MODULE_ENTRY        initQtTest
#define SIP_MODULE_TYPE         void
#define SIP_MODULE_DISCARD(r)
#define SIP_MODULE_RETURN(r)    return
#endif

#if defined(SIP_STATIC_MODULE)
extern "C" SIP_MODULE_TYPE SIP_MODULE_ENTRY()
#else
PyMODINIT_FUNC SIP_MODULE_ENTRY()
#endif
{
    static PyMethodDef sip_methods[] = {
        {0, 0, 0, 0}
    };

#if PY_MAJOR_VERSION >= 3
    static PyModuleDef sip_module_def = {
        PyModuleDef_HEAD_INIT,
        "PyQt4.QtTest",
        NULL,
        -1,
        sip_methods,
        NULL,
        NULL,
        NULL,
        NULL
    };
#endif

    PyObject *sipModule, *sipModuleDict;
    PyObject *sip_sipmod, *sip_capiobj;

    /* Initialise the module and get it's dictionary. */
#if PY_MAJOR_VERSION >= 3
    sipModule = PyModule_Create(&sip_module_def);
#elif PY_VERSION_HEX >= 0x02050000
    sipModule = Py_InitModule(sipName_PyQt4_QtTest, sip_methods);
#else
    sipModule = Py_InitModule(const_cast<char *>(sipName_PyQt4_QtTest), sip_methods);
#endif

    if (sipModule == NULL)
        SIP_MODULE_RETURN(NULL);

    sipModuleDict = PyModule_GetDict(sipModule);

    /* Get the SIP module's API. */
#if PY_VERSION_HEX >= 0x02050000
    sip_sipmod = PyImport_ImportModule(SIP_MODULE_NAME);
#else
    sip_sipmod = PyImport_ImportModule(const_cast<char *>(SIP_MODULE_NAME));
#endif

    if (sip_sipmod == NULL)
    {
        SIP_MODULE_DISCARD(sipModule);
        SIP_MODULE_RETURN(NULL);
    }

    sip_capiobj = PyDict_GetItemString(PyModule_GetDict(sip_sipmod), "_C_API");
    Py_DECREF(sip_sipmod);

#if defined(SIP_USE_PYCAPSULE)
    if (sip_capiobj == NULL || !PyCapsule_CheckExact(sip_capiobj))
#else
    if (sip_capiobj == NULL || !PyCObject_Check(sip_capiobj))
#endif
    {
        SIP_MODULE_DISCARD(sipModule);
        SIP_MODULE_RETURN(NULL);
    }

#if defined(SIP_USE_PYCAPSULE)
    sipAPI_QtTest = reinterpret_cast<const sipAPIDef *>(PyCapsule_GetPointer(sip_capiobj, SIP_MODULE_NAME "._C_API"));
#else
    sipAPI_QtTest = reinterpret_cast<const sipAPIDef *>(PyCObject_AsVoidPtr(sip_capiobj));
#endif

#if defined(SIP_USE_PYCAPSULE)
    if (sipAPI_QtTest == NULL)
    {
        SIP_MODULE_DISCARD(sipModule);
        SIP_MODULE_RETURN(NULL);
    }
#endif

    /* Export the module and publish it's API. */
    if (sipExportModule(&sipModuleAPI_QtTest,SIP_API_MAJOR_NR,SIP_API_MINOR_NR,0) < 0)
    {
        SIP_MODULE_DISCARD(sipModule);
        SIP_MODULE_RETURN(0);
    }

    sip_QtTest_qt_metaobject = (sip_qt_metaobject_func)sipImportSymbol("qtcore_qt_metaobject");
    sip_QtTest_qt_metacall = (sip_qt_metacall_func)sipImportSymbol("qtcore_qt_metacall");
    sip_QtTest_qt_metacast = (sip_qt_metacast_func)sipImportSymbol("qtcore_qt_metacast");

    if (!sip_QtTest_qt_metacast)
        Py_FatalError("Unable to import qtcore_qt_metacast");

    /* Initialise the module now all its dependencies have been set up. */
    if (sipInitModule(&sipModuleAPI_QtTest,sipModuleDict) < 0)
    {
        SIP_MODULE_DISCARD(sipModule);
        SIP_MODULE_RETURN(0);
    }

    /* Get the APIs of the modules that this one is dependent on. */
    sipModuleAPI_QtTest_QtCore = sipModuleAPI_QtTest.em_imports[0].im_module;
    sipModuleAPI_QtTest_QtGui = sipModuleAPI_QtTest.em_imports[1].im_module;

    SIP_MODULE_RETURN(sipModule);
}
