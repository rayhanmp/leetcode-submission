/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

typedef struct Element {
    int key;
    int value;
 } Element;

typedef struct HashMap {
    int size;
    Element **table;
 } HashMap;

int hash(HashMap *map, int value) {
    int hashedVal = value % map->size;
    if (hashedVal<0) {
        hashedVal += map->size;
    }
    return hashedVal;
}

HashMap *makeNewHashMap(int size) {
    HashMap *map = (HashMap*) malloc(sizeof(HashMap));
    map->size = size;
    map->table = (Element**)calloc(map->size, sizeof(Element*));
    return map;
}

void insertElement(HashMap *map, int val, int idx) {
    int key = hash(map, val);

    Element *element = (Element*)malloc(sizeof(Element));
    element->key = key;
    element->value = idx;
    
    map->table[key] = element;
}

Element *getElement(HashMap *map, int val) {
    int key = hash(map, val);
    return map->table[key];
}

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int* result = (int*)malloc(sizeof(int) * 2);
    HashMap* map = makeNewHashMap(numsSize*10);

    for (int i = 0; i < numsSize; i++) {
        int complement = target - nums[i];
        Element* complementElement = getElement(map, complement);
        if (complementElement != NULL && complementElement->value != i) {
            result[0] = complementElement->value;
            result[1] = i;
            *returnSize = 2;
            return result;
        }
        insertElement(map, nums[i], i);
    }

    *returnSize = 0;
    return NULL;
}