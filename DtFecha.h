#ifndef DTFECHA
#define DTFECHA

class DtFecha{
    private:
        int dia;
        int mes;
        int anio;
    public:
        DtFecha();
        DtFecha(int, int, int);
        int getDia();
        int getMes();
        int getAnio();
        ~DtFecha();
};

#endif
