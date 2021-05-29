#include <iostream>
#include "Archivo.h"
#include "CPP.h"
#include "JPG.h"
#include "PPT.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#include "FileSystem.h"
int menu();
int main(int argc, char** argv) {
	FileSystem* v =  new FileSystem();
	
	Directorio* carpeta1 =new Directorio("carpeta1","claudio",v->getDi());
	Directorio* carpeta2 =new Directorio("carpeta2","claudio",carpeta1);
	Directorio* carpeta3 =new Directorio("carpeta3","claudio",carpeta1);
	CPP* archivo2 = new CPP(0,0,"arch2","claudio",carpeta2);
	CPP* archivo3 = new CPP(0,0,"arch3","claudio",carpeta2);
	CPP* archivo4 = new CPP(0,0,"arch4","claudio",carpeta3);
	CPP* archivo6 = new CPP(0,0,"arch6","claudio",carpeta3);
	CPP* archivo7 = new CPP(0,0,"arch7","claudio",carpeta1);
	CPP* archivo8 = new CPP(0,0,"arch8","claudio",carpeta1);
	carpeta1->agregarDirectorio(carpeta2);
	carpeta1->agregarDirectorio(carpeta3);
	v->getDi()->agregarDirectorio(carpeta1);
	
	v->getDi()->agregarDirectorio(new Directorio("data","claudio",v->getDi()));
	v->getDi()->agregarDirectorio(new Directorio("users","claudio",v->getDi()));
	v->getDi()->agregarDirectorio(new CPP(0,0,"main","claudio",v->getDi()));
	int opcion = 0;
	while(opcion!=5) {
		switch(opcion = menu()) {
			case 1: {
				int p = 0;
				cout<<"Ingrese la profundidad:";
				cin>>p;
				v->getDi()->imprimirRecursivo(p);
				break;
			}
			case 2: {
				string nombre;
				string autor;
				cout<<"Ingrese el nombre del archivo:";
				cin>>nombre;
				cout<<"Ingrese el autor del archivo:";
				cin>>autor;
				cout<<"1.CPP\n2.JPG\n3.PPT\nOpcion:";

				int opcionarchivo = 0;
				cin>>opcionarchivo;
				switch(opcionarchivo) {
					case 1: {
						int numlineas= 0;
						int numerrores=0;
						cout<<"Ingrese numero de lineas del cpp:";
						cin>>numlineas;
						cout<<"Ingrese numero de errores";
						cin>>numerrores;
						v->getDi()->agregarArchivo(new CPP(numlineas,numerrores,nombre,autor,v->getDi()));
						//	hijos.push_back(new CPP(numlineas,numerrores,nombre,autor,));
						break;
					}
					case 2: {
						cout<<"Tiene flash?\n1.si\n2.no\nopcion:";
						int t = 0;
						cin>>t;

						bool tienef;
						switch(t) {
							case 1: {
								tienef=true;
								break;
							}
							case 2: {
								tienef = false;
								break;
							}
						}
						cout<<"Ingres resolucion:";
						string reso;
						cin>>reso;
						cout<<"ingrese largo";
						int largo;
						cin>>largo;
						cout<<"ingrese ancho";
						int ancho;
						cin>>ancho;
						v->getDi()->agregarArchivo(new JPG(tienef,reso,ancho,largo,nombre,autor,v->getDi()));

						break;
					}
					case 3: {
						string titulo ;
						int ns;
						int np;
						bool anim;
						cout<<"ingrese el titulo:";
						cin>>titulo;
						cout<<"ingrese numero de slides";
						cin>>ns;
						cout<<"ingrese numero de plantilla:";
						cin>>np;
						cout<<"tiene animaciones?\n1.si\n2.no";
						int o=0;
						cin>>o;
						switch(o) {
							case 1: {
								anim=true;
								break;
							}
							case 2: {
								anim = false;
								break;
							}
						}
						v->getDi()->agregarArchivo(new PPT(titulo,ns,np,anim,nombre,autor,v->getDi()));
						break;
					}

				}
				break;
			}
			case 3: {
				string nombre;
				string autor;
				cout<<"Ingrese el nombre del directorio:";
				cin>>nombre;
				cout<<"Ingrese el autor del directorio:";
				cin>>autor;
				v->getDi()->agregarDirectorio(new Directorio(nombre,autor,v->getDi()));

				break;
			}
			case 4: {
				cout<<"Ingrese el nombre del archivo o directorio a buscar";
				string palabran;
				cin>>palabran;
				v->getDi()->buscar(palabran);
				break;
			}
		}
	}
	delete v;
	return 0;
}
int menu() {
	int opcion=0;


	while(opcion!=5) {
		cout<<"\n=============MENU==========\n1.Imprimir FileSystem\n2.Agregar archivo 2\n3.Agregar directorio\n4.Buscar por nombre\n5.Opcion:";
		cin>>opcion;
		if(opcion<=5&&opcion>=1) {
			//return opcion;
			break;
		}

	}
	return opcion;


}