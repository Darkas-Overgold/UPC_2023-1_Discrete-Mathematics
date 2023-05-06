#pragma once
#include "Programa.h"
#include <iostream> 
#include <locale.h>
#include <unordered_map> 
#include <vector>
using namespace std;

class Grafo {
protected:
    unordered_map<string, vector<string>> graph;
public:
    bool existeCamino(std::string origen, std::string destino);

    Grafo(unordered_map<string, vector<string>> g) : graph(g) {}

    vector<string> ciudades() {
        vector<string> ciudades;
        for (auto& par : graph) {
            ciudades.push_back(par.first);
        }
        return ciudades;
    }

    bool vueloDirecto(string origen, string destino) {
        return find(graph[origen].begin(), graph[origen].end(), destino) != graph[origen].end();
    }
    vector<string> unaEscalaCiudades(string origen, string destino) {
        vector<string> destinos = graph[origen];
        vector<string> paradas;
        for (string parada : destinos) {
            if (vueloDirecto(parada, destino)) {
                paradas.push_back(parada);
            }
        }
        return paradas;
    }
    vector<pair<string, string>> dosEscalasCiudades(string origen, string destino) {
        vector<string> destinos = graph[origen];
        vector<pair<string, string>> paradas;
        for (string parada1 : destinos) {
            vector<string> destinos2 = graph[parada1];
            for (string parada2 : destinos2) {
                if (vueloDirecto(parada2, destino)) {
                    paradas.push_back({ parada1, parada2 });
                }
            }
        }
        return paradas;
    }

    vector<string> Grafo::ciudadesConConexionDirecta(string ciudadOrigen, string ciudadDestino) {
        vector<string> conexionesDirectas;
        auto it = graph.find(ciudadOrigen);
        if (it != graph.end()) {
            for (auto& ciudad : it->second) {
                if (ciudad == ciudadDestino) {
                    conexionesDirectas.push_back(ciudad);
                }
            }
        }
        return conexionesDirectas;
    }

};