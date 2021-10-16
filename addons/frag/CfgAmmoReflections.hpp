#define ACE_EXPLOSION_REFLECTION(range, hit)\
class ace_explosion_reflection_##range##_##hit: ace_explosion_reflection_base {\
    indirectHitRange = range;\
    indirectHit = hit;\
    dangerRadiusHit = range*3;\
    suppressionRadiusHit = range*2;\
}

#define ACE_EXPLOSION_RANGE(range)\
    ACE_EXPLOSION_REFLECTION(range,10);\
    ACE_EXPLOSION_REFLECTION(range,20);\
    ACE_EXPLOSION_REFLECTION(range,30);\
    ACE_EXPLOSION_REFLECTION(range,40);\
    ACE_EXPLOSION_REFLECTION(range,50);\
    ACE_EXPLOSION_REFLECTION(range,60);\
    ACE_EXPLOSION_REFLECTION(range,70);\
    ACE_EXPLOSION_REFLECTION(range,80);\
    ACE_EXPLOSION_REFLECTION(range,90);\
    ACE_EXPLOSION_REFLECTION(range,100);\
    ACE_EXPLOSION_REFLECTION(range,110);\
    ACE_EXPLOSION_REFLECTION(range,120);\
    ACE_EXPLOSION_REFLECTION(range,130);\
    ACE_EXPLOSION_REFLECTION(range,140);\
    ACE_EXPLOSION_REFLECTION(range,150);\
    ACE_EXPLOSION_REFLECTION(range,160);\
    ACE_EXPLOSION_REFLECTION(range,170);\
    ACE_EXPLOSION_REFLECTION(range,180);\
    ACE_EXPLOSION_REFLECTION(range,190);\
    ACE_EXPLOSION_REFLECTION(range,200);\
    ACE_EXPLOSION_REFLECTION(range,210);\
    ACE_EXPLOSION_REFLECTION(range,220);\
    ACE_EXPLOSION_REFLECTION(range,230);\
    ACE_EXPLOSION_REFLECTION(range,240);\
    ACE_EXPLOSION_REFLECTION(range,250);\
    ACE_EXPLOSION_REFLECTION(range,260);\
    ACE_EXPLOSION_REFLECTION(range,270);\
    ACE_EXPLOSION_REFLECTION(range,280);\
    ACE_EXPLOSION_REFLECTION(range,290);\
    ACE_EXPLOSION_REFLECTION(range,300);\
    ACE_EXPLOSION_REFLECTION(range,310);\
    ACE_EXPLOSION_REFLECTION(range,320);\
    ACE_EXPLOSION_REFLECTION(range,330);\
    ACE_EXPLOSION_REFLECTION(range,340);\
    ACE_EXPLOSION_REFLECTION(range,350);\
    ACE_EXPLOSION_REFLECTION(range,360);\
    ACE_EXPLOSION_REFLECTION(range,370);\
    ACE_EXPLOSION_REFLECTION(range,380);\
    ACE_EXPLOSION_REFLECTION(range,390);\
    ACE_EXPLOSION_REFLECTION(range,400);\
    ACE_EXPLOSION_REFLECTION(range,410);\
    ACE_EXPLOSION_REFLECTION(range,420);\
    ACE_EXPLOSION_REFLECTION(range,430);\
    ACE_EXPLOSION_REFLECTION(range,440);\
    ACE_EXPLOSION_REFLECTION(range,450);\
    ACE_EXPLOSION_REFLECTION(range,460);\
    ACE_EXPLOSION_REFLECTION(range,470);\
    ACE_EXPLOSION_REFLECTION(range,480);\
    ACE_EXPLOSION_REFLECTION(range,490);\
    ACE_EXPLOSION_REFLECTION(range,500)

class ace_explosion_reflection_base: Sh_120mm_HE {
    CraterWaterEffects = "";
    CraterEffects = "";
    effectsMissile = "";
    ExplosionEffects = "";
    effectFlare = "";
    class HitEffects {
        hitWater = "";
    };
    multiSoundHit[] = {};
    explosionTime = 0.0001;
    explosive = 1;
    soundFakeFall[] = {};
    typicalSpeed = 0;
    model = "\A3\Weapons_F\empty.p3d";
    craterShape = "\A3\weapons_f\empty.p3d";
};

ACE_EXPLOSION_RANGE(2);
ACE_EXPLOSION_RANGE(4);
ACE_EXPLOSION_RANGE(6);
ACE_EXPLOSION_RANGE(8);
ACE_EXPLOSION_RANGE(10);
ACE_EXPLOSION_RANGE(12);
ACE_EXPLOSION_RANGE(14);
ACE_EXPLOSION_RANGE(16);
ACE_EXPLOSION_RANGE(18);
ACE_EXPLOSION_RANGE(20);
ACE_EXPLOSION_RANGE(22);
ACE_EXPLOSION_RANGE(24);
ACE_EXPLOSION_RANGE(26);
ACE_EXPLOSION_RANGE(28);
ACE_EXPLOSION_RANGE(30);
ACE_EXPLOSION_RANGE(32);
ACE_EXPLOSION_RANGE(34);
ACE_EXPLOSION_RANGE(36);
ACE_EXPLOSION_RANGE(38);
ACE_EXPLOSION_RANGE(40);
ACE_EXPLOSION_RANGE(42);
ACE_EXPLOSION_RANGE(44);
ACE_EXPLOSION_RANGE(46);
ACE_EXPLOSION_RANGE(48);
ACE_EXPLOSION_RANGE(50);
ACE_EXPLOSION_RANGE(52);
ACE_EXPLOSION_RANGE(54);
ACE_EXPLOSION_RANGE(56);
ACE_EXPLOSION_RANGE(58);
ACE_EXPLOSION_RANGE(60);
ACE_EXPLOSION_RANGE(62);
ACE_EXPLOSION_RANGE(64);
ACE_EXPLOSION_RANGE(66);
ACE_EXPLOSION_RANGE(68);
ACE_EXPLOSION_RANGE(70);
ACE_EXPLOSION_RANGE(72);
ACE_EXPLOSION_RANGE(74);
ACE_EXPLOSION_RANGE(76);
ACE_EXPLOSION_RANGE(78);
ACE_EXPLOSION_RANGE(80);
ACE_EXPLOSION_RANGE(82);
ACE_EXPLOSION_RANGE(84);
ACE_EXPLOSION_RANGE(86);
ACE_EXPLOSION_RANGE(88);
ACE_EXPLOSION_RANGE(90);
ACE_EXPLOSION_RANGE(92);
ACE_EXPLOSION_RANGE(94);
ACE_EXPLOSION_RANGE(96);
ACE_EXPLOSION_RANGE(98);
ACE_EXPLOSION_RANGE(100);
