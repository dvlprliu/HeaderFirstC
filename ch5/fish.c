#include <stdio.h>

struct exercise {
    const char *description;
    float duration;
};

struct meal {
    const char *ingredients;
    float weight;
};

struct preferences {
    struct meal food;
    struct exercise exercise;
};

struct fish {
    const char *name;
    const char *species;
    int teeth;
    int age;
    struct preferences care;
};


void catelog(struct fish f)
{
    printf("%s is a %s with %i teeth. He is %i\n", f.name, f.species, f.teeth, f.age);
    printf("preference: %s, %f\n", f.care.food.ingredients, f.care.exercise.duration);
}

void label(struct fish f)
{
    printf("");
}

int main()
{
    struct fish snappy = {"Snappy", "Piranha", 69, 4, {{"Meat", 7.5},{"Running", 19} }};
    catelog(snappy);
    label(snappy);
    printf("The size of fish struct %lu\n", sizeof(struct fish));
    printf("The size of const char * is %lu\n", sizeof(const char*));
    printf("The size of int is %lu\n", sizeof(int));

    return 0;
}
