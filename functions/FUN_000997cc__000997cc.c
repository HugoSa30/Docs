/*
 * Program: n42.bin
 * Function: FUN_000997cc
 * Entry: 000997cc
 * Exported by: ExportAllDecompiledFunctions.java
 */


undefined4 FUN_000997cc(undefined4 param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  byte bVar2;
  undefined uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  
  uVar5 = 0;
  do {
    (&DAT_005b9f00)[uVar5 * 3] = 0;
    (&DAT_005b9f04)[uVar5 * 3] = 0;
    *(undefined *)(&DAT_005b9f08 + uVar5 * 3) = 0;
    *(undefined *)((int)&DAT_005b9f08 + uVar5 * 0xc + 1) = 0;
    *(undefined *)((int)&DAT_005b9f08 + uVar5 * 0xc + 2) = 0;
    uVar5 = uVar5 + 1 & 0xff;
  } while (uVar5 < 0x20);
  uVar6 = 0;
  if (param_2 != 0) {
    do {
      while( true ) {
        uVar1 = 0x1f - LZCOUNT(param_2);
        param_2 = param_2 & ~(1 << (uVar1 & 0x3f));
        uVar5 = param_3 >> (uVar1 & 0x3f) & 1;
        if (uVar5 == 0) {
          bVar2 = 0;
        }
        else {
          bVar2 = (byte)(param_4 >> (uVar1 & 0x3f)) & 1;
        }
        uVar3 = (undefined)uVar5;
        if (0xf < (uVar1 & 0xff)) break;
        uVar5 = uVar1 & 0xff;
        (&DAT_005b9f00)[uVar5 * 3] = &DAT_00304000;
        (&DAT_005b9f04)[uVar5 * 3] = &UNK_00304100 + uVar5 * 0x10;
        *(char *)(&DAT_005b9f08 + uVar5 * 3) = (char)uVar1;
        *(undefined *)((int)&DAT_005b9f08 + uVar5 * 0xc + 1) = uVar3;
        *(byte *)((int)&DAT_005b9f08 + uVar5 * 0xc + 2) = bVar2;
joined_r0x00099918:
        if (param_2 == 0) goto LAB_0009992c;
      }
      uVar4 = (uVar1 & 0xff) + ((int)(uVar1 & 0xff) >> 4) * -0x10;
      uVar5 = uVar4 & 0xff;
      if (uVar5 < 0x10) {
        uVar1 = uVar1 & 0xff;
        (&DAT_005b9f00)[uVar1 * 3] = &DAT_00304400;
        (&DAT_005b9f04)[uVar1 * 3] = &UNK_00304500 + uVar5 * 0x10;
        *(char *)(&DAT_005b9f08 + uVar1 * 3) = (char)uVar4;
        *(undefined *)((int)&DAT_005b9f08 + uVar1 * 0xc + 1) = uVar3;
        *(byte *)((int)&DAT_005b9f08 + uVar1 * 0xc + 2) = bVar2;
        goto joined_r0x00099918;
      }
      uVar6 = 1;
    } while (param_2 != 0);
  }
LAB_0009992c:
  (*(code *)&SUB_00fb16a0)(&DAT_005b9f00,&UNK_003f9a44);
  (*(code *)&SUB_00fb1ad4)();
  return uVar6;
}

