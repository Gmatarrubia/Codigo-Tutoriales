#include <Python.h>

static PyObject* calculadora_suma(PyObject* self, PyObject* args)
{
    int num1,num2;

    if (!PyArg_ParseTuple(args, "ii", &num1,&num2))
        return NULL;

    printf("Numeros introducidos %d + %d \n",num1, num2);
    int n = num1 + num2;
    printf("La suma es %d \n", n);

    Py_RETURN_NONE;
}
static PyObject* calculadora_division(PyObject* self, PyObject* args)
{
    float num1,num2;

    if (!PyArg_ParseTuple(args, "ff", &num1,&num2))
        return NULL;

    printf("Numeros introducidos %f / %f \n",num1, num2);
    float n = num1 / num2;
    printf("La division es %f \n", n);

    Py_RETURN_NONE;
}
static PyMethodDef calculadora_Methods[] =
{
     {"suma", calculadora_suma, METH_VARARGS, "Dados 2 numeros muestra la suma"},
     {"division", calculadora_division, METH_VARARGS, "Dados 2 numeros muestra la division"},
     {NULL, NULL, 0, NULL}
};

PyMODINIT_FUNC initcalculadora(void)
{
     (void) Py_InitModule("calculadora", calculadora_Methods);
}
