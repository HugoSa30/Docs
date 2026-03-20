/*
 * Program: n42.bin
 * Function: FUN_001b322c
 * Entry: 001b322c
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_001b322c(short param_1,short param_2,int param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  char cVar4;
  undefined2 uVar3;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined *puVar8;
  uint uVar9;
  uint in_TBLr;
  int in_TBUr;
  
  if ((DAT_003fc983 != '\x01') && (iVar2 = (*(code *)&SUB_00fadb9c)(1), 8 < iVar2)) {
    uVar9 = (uint)(short)(param_1 - param_2);
    if ((int)uVar9 < 0) {
      uVar9 = (uint)(short)-(param_1 - param_2);
    }
    if (((int)(uint)*(byte *)(_DAT_003fc914 + 2) < (int)uVar9) &&
       ((int)uVar9 < (int)(0x78 - (uint)*(byte *)(_DAT_003fc914 + 2)))) {
      DAT_003fc97f = (*(code *)&SUB_00064a1c)(1);
      DAT_003fc980 = (*(code *)&SUB_00064a1c)(0);
      cVar4 = (*(code *)&SUB_00fadd68)();
      if (cVar4 == '\0') {
        return 0;
      }
      iVar2 = (*(code *)&SUB_00fb3178)(0);
      if (iVar2 < param_3) {
        DAT_003fc983 = '\x01';
        (*(code *)&SUB_00fad8d0)(1,1);
        (*(code *)&SUB_00fad8d0)(0,1);
        puVar8 = &DAT_003fc983;
        iVar2 = 4;
        do {
          puVar8[1] = 0;
          puVar8 = puVar8 + 2;
          *puVar8 = 0;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
        DAT_003fc98d = 0;
        DAT_003fc98c = 0;
      }
      if (*(byte *)((int)_DAT_003fc914 + 9) < _DAT_003fc97c) {
        if ((_DAT_003fc914 != (code **)0x0) && (*_DAT_003fc914 != (code *)0x0)) {
          (**_DAT_003fc914)(0xd,10,uVar9 & 0xffff);
        }
        _DAT_003fc97c = 0;
      }
      _DAT_003fc97c = _DAT_003fc97c + 1;
    }
    else {
      iVar2 = (*(code *)&SUB_00fb3178)(0);
      if (param_3 <= iVar2) {
        return 0;
      }
      DAT_003fc983 = '\x01';
      (*(code *)&SUB_00fad8d0)(1,0);
      (*(code *)&SUB_00fad8d0)(0,0);
    }
    if (DAT_003fc983 != '\0') {
      uVar9 = in_TBUr * 0x6666 + (int)((ulonglong)in_TBLr * 0x6666 >> 0x20);
      uVar6 = uVar9 * 0x10000 | in_TBLr * 0x6666 >> 0x10;
      uVar9 = uVar9 >> 0x10;
      uVar7 = uVar9 + (0xffffff9b < uVar6);
      bVar1 = uVar9 < uVar7;
      if (uVar9 == uVar7) {
        bVar1 = uVar6 < uVar6 + 100;
      }
      if (bVar1) {
        do {
          cVar4 = func_0xff2200ec();
          if (cVar4 == '\x01') {
            DAT_003fc981 = (*(code *)&SUB_00064a1c)(1);
            DAT_003fc982 = (*(code *)&SUB_00064a1c)(0);
            cVar4 = (*(code *)&SUB_00fadd68)();
            if (cVar4 != '\0') {
              (*(code *)&SUB_00fb2c98)(param_4,0);
              _DAT_003fc97c = 0;
              _DAT_003fc918 = param_3;
              uVar3 = (*(code *)&SUB_00fb3178)(0);
              if (_DAT_003fc914[1] != (code *)0x0) {
                (*_DAT_003fc914[1])(3,1,uVar3,param_4);
              }
              DAT_003fc983 = 0;
              return 1;
            }
            return 0;
          }
          uVar5 = in_TBUr * 0x6666 + (int)((ulonglong)in_TBLr * 0x6666 >> 0x20);
          uVar9 = uVar5 >> 0x10;
          bVar1 = uVar9 < uVar7;
          if (uVar9 == uVar7) {
            bVar1 = (uVar5 * 0x10000 | in_TBLr * 0x6666 >> 0x10) < uVar6 + 100;
          }
        } while (bVar1);
      }
      if ((_DAT_003fc914 != (code **)0x0) && (*_DAT_003fc914 != (code *)0x0)) {
        (**_DAT_003fc914)(0xd,0xb,100);
      }
      DAT_003fc983 = '\0';
    }
  }
  return 0;
}

