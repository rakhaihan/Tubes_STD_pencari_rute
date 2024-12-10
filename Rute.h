#ifndef RUTE_H_INCLUDED
#define RUTE_H_INCLUDED

#define namaGudang(g) g->namaGudang
#define nextVertex(g) g->nextVertex
#define firstEdge(g) g->firstEdge

#define namaRute(r) r->namaRute
#define jarakTempuh(r) r->jarakTempuh
#define nextEdge(r) r->nextEdge

#define firstVertex(G) G.firstVertex

#include <string>
#include <iostream>

using namespace std;

typedef struct gudang *adrVertex;
typedef struct rute *adrEdge;

struct gudang {
    string namaGudang;
    adrVertex nextVertex;
    adrEdge firstEdge;
};

struct rute {
    string namaRute;
    int jarakTempuh;
    adrEdge nextEdge;
};

struct graph {
    adrVertex firstVertex;
};


void createVertex(string namaGudang, adrVertex &v);
void initGraph(graph &G);
void addVertex(graph &G, string namaGudang);
void addEdge(graph &G, string gudangAsal, string gudangTujuan, int jarakTempuh);

void findAllRoutes(graph &G, string gudangAsal, string gudangTujuan, string allRoutes[][], int &ruteCount, int jarak[]);
void cariRuteTerpendek(graph G, string gudangAsal, string gudangTujuan);

void hindariMacet(graph &G, string gudangAsal, string gudangTujuan, string ruteMacet);
void lewatJalanTol(graph &G, string gudangAsal, string gudangTujuan, int jarakTol, bool tolTersedia);

int hitungBiayaPerjalanan(graph &G, string gudangAsal, string gudangTujuan);

#endif // RUTE_H_INCLUDED
