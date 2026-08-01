#include <iostream>
#include "../include/pager.hpp"
using namespace std;

class Pager {
    private:
        int page_size;
        int entities_per_page;
        int max_pages;
        int max_entities;
    public:
        Pager(){
            page_size = 0;
            entities_per_page = 0;
            max_pages = 0;
            max_entities = 0;
        }
        void setpg_sz(int size){
            page_size = size;
        }
        void setenpp(int epp){
            entities_per_page = epp;
        }
        void setmax_pg(int maxpage){
            max_pages = maxpage;
        }
        void setmax_en(int max_en){
            max_entities = max_en;
        }
        int getpg_sz(int size){
            return page_size;
        }
        int getenpp(int epp){
            return entities_per_page;
        }
        int getmax_pg(int maxpage){
            return max_pages;
        }
        int getmax_en(int max_en){
            return max_entities;
        }
        ~Pager(){}
}