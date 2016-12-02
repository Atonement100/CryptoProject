#ifndef KASISKI_H
#define KASISKI_H

class Kasiski : public Module {
    public:
        Kasiski();

        // here are the funcs I need to override
        void disp_desc();
        int run();

    private:
        string find_key(string&, int);
        void attack();
};

#endif
