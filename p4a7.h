#ifndef PERSONAS_H
#define PERSONAS_H
#include <iostream>
#include <string>

using namespace std;

class Personas
{
    private:
        string nombre;
        string apellidopaterno;
        int edad;

    public:

    int dni;
    Personas(string nombre,string apellidopaterno, int edad, int dni)
    {
        this->nombre = nombre;
        this->edad = edad;
        this->dni = dni;
        this->apellidopaterno = apellidopaterno;
    }
    virtual string getNombre()
    {
        return nombre;
    }

    virtual int getEdad()
    {
        return edad;
    }

    virtual string getApellidoPaterno()
    {
        return apellidopaterno;
    }

    virtual void setEdad(int newEdad)
    {
        edad = newEdad;
    }
    
    virtual void setNombre(string newNombre)
    {
        nombre = newNombre;
    }

    virtual void setApellido(string newApellido)
    {
        apellidopaterno = newApellido;
    }   
};

class Alumno : public Personas
{
    private:
        int codigo;
        
    public:
        string carrera;
        Alumno(string nombre, string apellidopaterno,int edad, int dni, int codigo, string carrera) : Personas(nombre, apellidopaterno, edad, dni)
        {
            this->codigo = codigo;
            this->carrera = carrera;
        }  

        void setCodigo(int newCodigo)
        {
            codigo = newCodigo;
        }

        int getCodigo()
        {
            return codigo;
        }

        void obtenerCorreo()
        {
            string ucsm = "@ucsm.edu.pe";
            string nombre1,apellido1;
            nombre1 = getNombre();
            apellido1 = getApellidoPaterno();
            cout << "Correo Institucional: " <<  nombre1 <<"."<< apellido1 <<ucsm<<endl;
        }

        ~Alumno() 
        {
        }
};

#endif