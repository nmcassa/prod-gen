#include <stdio.h>
#include <Python.h>
#include "libmypy.hpp"
#include "methods.hpp"

PyObject * convolTable(PyObject *self, PyObject *args) {
	int row;
	int col;

	if(!PyArg_ParseTuple(args, "ii", &row, &col))
		return NULL;

    int** arr = retConvol(row, col);

    PyObject *l;
    l = PyList_New(col);

    return ;
}