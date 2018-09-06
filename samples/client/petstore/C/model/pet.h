/*
 * pet.h
 *
 * A pet for sale in the pet store
 */

#ifndef _pet_H_
#define _pet_H_

#include <string.h>
#include "array.h"
#include "category.h"
#include "tag.h"

typedef struct pet_t {
	long id; //TODO can be modified for numeric in mustache
	category_t category;
	char *name;
	array photo_urls; //TODO can be modified for numeric in mustache
	array_t *tags;
	char *status;
	
} pet_t;

pet_t *pet_create(
		long		*id,
		category		*category,
		char		*name,
		array		*photoUrls,
		array		*tags,
		char		*status
		);
		
void pet_free(pet_t *pet);

pet_t *pet_parseFromJSON(char *jsonString)

cJSON *pet_convertToJSON(pet_t *pet);

#endif /* _pet_H_ */