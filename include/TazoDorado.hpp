class TazoDorado
{
private:
   bool flotando;
public:
    TazoDorado() {
        this->flotando = false;
    }
    ~TazoDorado() {}
    void Flotar() {
            this->flotando = true;
    }
    bool IsFloating(){
        return this->flotando;
    }
    void Inicializar() {
        this->flotando = false;
    }
};