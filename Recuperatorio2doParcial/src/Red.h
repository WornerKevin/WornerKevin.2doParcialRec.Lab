/*
 * Red.h
 *
 *  Created on: 3 ago. 2022
 *      Author: Kevin Worner
 */

#ifndef RED_H_
#define RED_H_

struct{
	int id;
	char user[50];
	int likes;
	int dislikes;
	int followers;

}typedef eRed;

/**
 * @brief Reserva espacio en memoria
 *
 * @return
 */
eRed* Red_new();

/**
 * @brief Genera un nuevo posteo parametrizado
 *
 * @param idStr
 * @param userStr
 * @param likesStr
 * @param dislikesStr
 * @param followersStr
 * @return
 */
eRed* newParametros(char* idStr,char* userStr,char* likesStr,char* dislikesStr, char* followersStr);
/**
 * @brief Elimina el espacio generado para el posteo en memoria
 *
 * @param this
 */
void Red_delete(eRed* this);
//SETTERS

/**
 * @brief Settea el id del post
 *
 * @param this
 * @param id
 * @return
 */
int Red_setId(eRed* this,int id);
/**
 * @brief Settea el nombre de usuario
 *
 * @param this
 * @param user
 * @return
 */
int Red_setUser(eRed* this,char* user);
/**
 * @brief Settea los likes
 *
 * @param this
 * @param likes
 * @return
 */
int Red_setLikes(eRed* this,int likes);
/**
 * @brief Settea los dislikes
 *
 * @param this
 * @param dislikes
 * @return
 */
int Red_setDislikes(eRed* this,int dislikes);
/**
 * @brief Settea los followers
 *
 * @param this
 * @param followers
 * @return
 */
int Red_setFollowers(eRed* this,int followers);
//GETTERS
/**
 * @brief Obtiene el id del post
 *
 * @param this
 * @param id
 * @return
 */
int Red_getId(eRed* this,int* id);
/**
 * @brief Obtiene el nombre de usuario
 *
 * @param this
 * @param user
 * @return
 */
int Red_getUser(eRed* this,char* user);
/**
 * @brief Obtiene los likes del post
 *
 * @param this
 * @param likes
 * @return
 */
int Red_getLikes(eRed* this,int* likes);
/**
 * @brief Obtiene los dislikes
 *
 * @param this
 * @param dislikes
 * @return
 */
int Red_getDislikes(eRed* this,int* dislikes);
/**
 * @brief Obtiene los followers del post
 *
 * @param this
 * @param followers
 * @return
 */
int Red_getFollowers(eRed* this,int* followers);
//FILTROS
/**
 * @brief Busca los posteos con mas de 3k de likes
 *
 * @param pElement
 * @return
 */
int filtrarMejores(void* pElement);
/**
 * @brief Busca los posteos con mas dislikes que likes
 *
 * @param pElement
 * @return
 */
int filtrarHaters(void* pElement);
//ORDENAMIENTO
/**
 * @brief Ordena la lista por seguidores de manera descendente
 *
 * @param followers1
 * @param followers2
 * @return
 */
int Red_sortFollowers(void* followers1,void* followers2);

/**
 * @brief Muestra un posteo
 *
 * @param red
 * @return
 */
int red_mostrarUno(eRed* red);

#endif /* RED_H_ */
