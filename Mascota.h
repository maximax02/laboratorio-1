#indef MASCOTA
#define MASCOTA

class Mascota{
    private:
        string nombre;
        Genero genero;
        float peso;
    public:
        Mascota();
        void setNombre(string n);
        string getNombre();
        void setGenero(Genero g);
        Genero getGenero();
        void setPeso(float p);
        float getPeso();
        virtual float obtenerRacionDiaria();
        ~Mascota();
};

#endif