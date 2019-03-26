#indef DTCONSULTA
#define DTCONSULTA

class DtConsulta{
    private:
        string nombre;
        Genero genero;
        float peso;
        float racionDiaria;
    public:
        DtConsulta();
        string getNombre();
        Genero getGenero();
        float getPeso();
        float getRacionDiaria();
        ~DtConsulta();
};

#endif