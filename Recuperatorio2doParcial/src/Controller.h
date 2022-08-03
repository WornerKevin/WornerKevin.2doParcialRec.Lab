#ifndef CONTROLLER_H_
#define CONTROLLER_H_

//LOAD
/**
 * @brief Carga el achivo de texto
 *
 * @param path
 * @param pArrayList
 * @return
 */
int controller_loadFromText(char* path , LinkedList* pArrayList);

/**
 * @brief Busca el archivo por nombre
 *
 * @param pArrayList
 * @return
 */
int controller_nameFile(LinkedList* pArrayList);
//SAVE
/**
 * @brief Guarda el texto en un archivo de texto
 *
 * @param path
 * @param pArrayList
 * @return
 */
int controller_saveAsText(char* path , LinkedList* pArrayList);
//LIST
/**
 * @brief Muestra la lista cargada
 *
 * @param pArrayList
 * @return
 */
int controller_List(LinkedList* pArrayList);
//ESTADISTICAS
/**
 * @brief Se encarga de generar las estadisticas de manera aleatoria
 *
 * @param pRed
 */
void* controller_GenerarEstadisticas(void* pRed);
//FILTROS
/**
 * @brief Busca los mejores posteos y los guarda en un archivo de texto
 *
 * @param pArray
 * @return
 */
int controller_filtrarPorMejores(LinkedList* pArray);

/**
 * @brief Busca los posteos con mas dislikes que likes y lo guarda en un archivo de  texto
 *
 * @param pArray
 * @return
 */
int controller_filtrarHaters(LinkedList* pArray);
//INFORME
/**
 * @brief Muestra el usuario con mas likes y la cantidad
 *
 * @param pArrayPais
 * @return
 */
int controller_MasPopular(LinkedList* pArrayPais);

#endif /* CONTROLLER_H_ */
