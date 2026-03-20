/*
 * Program: n42.bin
 * Function: FUN_001b2fa4
 * Entry: 001b2fa4
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_001b2fa4(uint param_1,int param_2)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if (_DAT_003fc978 < 2) {
    if ((_DAT_003fc914 != (code **)0x0) && (*_DAT_003fc914 != (code *)0x0)) {
      (**_DAT_003fc914)(0xd,1,param_1 & 0xffff);
    }
    uVar2 = 0;
  }
  else if ((int)param_1 < 6) {
    if (*(int *)(&DAT_003fc918 + param_1 * 0x10) == 0) {
      if ((_DAT_003fc914 != (code **)0x0) && (*_DAT_003fc914 != (code *)0x0)) {
        (**_DAT_003fc914)(0xd,3,param_1 & 0xffff);
      }
      uVar2 = 0;
    }
    else {
      (&DAT_003fc925)[param_1 * 0x10] = (char)param_2;
      puVar1 = _DAT_003fc960;
      if (param_2 == 1) {
        if (param_1 == 3) {
          DAT_003fc5b5 = DAT_003fc94c;
          if ((DAT_003fc94c == 0) || (DAT_003fc5ad < DAT_003fc94c)) {
            DAT_003fc5b5 = DAT_003fc5ad;
          }
        }
        else if ((param_1 == 4) && (_DAT_003fc960 != (undefined2 *)0x0)) {
          DAT_003fc5c8 = *(undefined *)(_DAT_003fc960 + 3);
          (*(code *)&SUB_00fab988)
                    (*(undefined *)((int)_DAT_003fc960 + 7),*(undefined *)(_DAT_003fc960 + 2),
                     *(undefined *)((int)_DAT_003fc960 + 5),*(undefined *)(_DAT_003fc960 + 4),
                     *_DAT_003fc960,_DAT_003fc960[1]);
          _DAT_003fc958 = (uint)*(byte *)(puVar1 + 2);
          uVar3 = (uint)*(byte *)((int)puVar1 + 5);
          if (_DAT_003fc958 < uVar3) {
            _DAT_003fc958 = uVar3;
          }
        }
      }
      else if (param_1 == 4) {
        (*(code *)&SUB_00fabaf0)();
      }
      uVar2 = 1;
    }
  }
  else {
    if ((_DAT_003fc914 != (code **)0x0) && (*_DAT_003fc914 != (code *)0x0)) {
      (**_DAT_003fc914)(0xd,2,param_1 & 0xffff);
    }
    uVar2 = 0;
  }
  return uVar2;
}

