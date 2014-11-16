#include <Python.h>
#include <iostream>
#define pi 3.141592653589793

using namespace std;

int main () {
	//Inicio el interprete Python e imprimo informacion relevante
	Py_Initialize();

	PyObject *FileScript;
	FileScript = PyFile_FromString("script.py","r");
	PyRun_SimpleFile(PyFile_AsFile(FileScript),"r");

	PyObject *retorno, *modulo, *clase, *metodo, *argumentos, *objeto;
	int *resultado;
	modulo = PyImport_ImportModule("script");
	clase = PyObject_GetAttrString(modulo, "Numeros");
	argumentos = Py_BuildValue("ii",5,11);

	objeto = PyEval_CallObject(clase, argumentos);
	metodo = PyObject_GetAttrString(objeto, "suma");

	argumentos = Py_BuildValue("()");
	retorno = PyEval_CallObject(metodo,argumentos);
	PyArg_Parse(retorno, "i", &resultado);
	cout<<"El resultado es: "<<int(resultado)<<endl;

	Py_Finalize();

	char terminar;
	cin>>terminar;
	return 1;
}