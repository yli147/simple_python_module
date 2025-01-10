#include <Python.h>

static PyObject* mymodule_hello(PyObject* self, PyObject* args) {
    return Py_BuildValue("s", "Hello, World!");
}

static PyMethodDef MyModuleMethods[] = {
    {"hello", mymodule_hello, METH_VARARGS, "Returns a greeting."},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef mymodule = {
    PyModuleDef_HEAD_INIT,
    "mymodule",
    NULL,
    -1,
    MyModuleMethods
};

PyMODINIT_FUNC PyInit_mymodule(void) {
    return PyModule_Create(&mymodule);
}
