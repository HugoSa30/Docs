/*
 * Program: n42.bin
 * Function: FUN_0010d680
 * Entry: 0010d680
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0010d680(void)

{
  bool bVar1;
  int iVar2;
  int in_TBLr;
  
  if (_DAT_003fbbe4 <=
      (uint)(in_TBLr - *(int *)(*(int *)(**(int **)(_DAT_003fbb84 + 0xc) + 4) + 0x28))) {
    _DAT_003fbbf0 =
         FUN_00108000(**(undefined4 **)(_DAT_003fbb84 + 0xc),
                      (*(undefined4 **)(_DAT_003fbb84 + 0xc))[3],&DAT_003fbbe8);
    iVar2 = FUN_0010e334(*(undefined4 *)(*(int *)(_DAT_003fbb84 + 0xc) + 0xc),_DAT_003fbbf0,
                         *(undefined2 *)(*(int *)(_DAT_003fbb84 + 0xc) + 0x10));
    if ((iVar2 != 0) && (DAT_003fff84 != 'U')) {
      DAT_003fbb90 = 0;
      bVar1 = false;
      if (*(char *)(_DAT_003fbb84 + 8) != '\0') {
        do {
          iVar2 = (**(code **)(_DAT_003fbb8c + (uint)DAT_003fbb90 * 0x14 + 4))();
          if (iVar2 != 0) {
            bVar1 = true;
          }
          DAT_003fbb90 = DAT_003fbb90 + 1;
        } while ((DAT_003fbb90 < *(byte *)(_DAT_003fbb84 + 8)) && (!bVar1));
        if ((bVar1) && (iVar2 = FUN_0010dd00(*(undefined4 *)(_DAT_003fbb84 + 0xc)), iVar2 != 0)) {
          DAT_003fbb90 = DAT_003fbb90 - 1;
          _4(*_DAT_003fba9c,&DAT_003fbbe8);
          _DAT_003fbaec = _DAT_003fbbe8;
          _DAT_003fbaf0 = _DAT_003fbbec;
          _DAT_003fff9c = _DAT_003fbbf0;
          FUN_0010dc28();
          DAT_003fbb98 = 1;
          return 2;
        }
      }
    }
  }
                    /* WARNING: Read-only address (ram,0x003fbbe8) is written */
                    /* WARNING: Read-only address (ram,0x003fbbec) is written */
  return 0;
}

