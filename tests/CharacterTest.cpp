#include "CppUTest/TestHarness.h"

extern "C++"
{
#include "Character.h"
}

TEST_GROUP(Character)
{
    Character* character;
    void setup()
    {
        character = new Character();
    }

    void teardown()
    {
        delete character;
    }
};

TEST(Character, created_health_1000)
{
    CHECK_EQUAL(1000, character->getHealth());
}

TEST(Character, created_level_1)
{
    CHECK_EQUAL(1, character->getLevel());
}

TEST(Character, created_is_alive)
{
    CHECK_EQUAL(true, character->isAlive());
}
