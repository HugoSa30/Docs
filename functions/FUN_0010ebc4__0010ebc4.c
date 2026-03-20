/*
 * Program: n42.bin
 * Function: FUN_0010ebc4
 * Entry: 0010ebc4
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0010ebc4(void)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  
  if (((DAT_003fff84 == 'U') && (DAT_003fffa0 == '\x01')) && (iVar3 = FUN_0010acd0(), iVar3 == 0)) {
    DAT_003fff84 = '\0';
    DAT_003fbb90 = 0;
    bVar2 = false;
    if (*(char *)(_DAT_003fbb84 + 8) != '\0') {
      do {
        cVar1 = *(char *)(_DAT_003fbb8c + (uint)DAT_003fbb90 * 0x14);
        if (((DAT_003fffa3 == cVar1) ||
            ((*(char *)(_DAT_003fbd48 + 2) == DAT_003fffa3 && (DAT_003fffa2 == cVar1)))) &&
           (iVar3 = (**(code **)(_DAT_003fbb8c + (uint)DAT_003fbb90 * 0x14 + 4))(), iVar3 != 0)) {
          bVar2 = true;
        }
        DAT_003fbb90 = DAT_003fbb90 + 1;
      } while ((DAT_003fbb90 < *(byte *)(_DAT_003fbb84 + 8)) && (!bVar2));
      if ((bVar2) && (iVar3 = FUN_0010dd00(*(undefined4 *)(_DAT_003fbb84 + 0xc)), iVar3 != 0)) {
        DAT_003fbb90 = DAT_003fbb90 - 1;
        _DAT_003fbbac =
             FUN_00108000(**(undefined4 **)(_DAT_003fbb84 + 0xc),_DAT_003fff9c,&DAT_003fbba4);
        _4(*_DAT_003fba9c,&DAT_003fbba4);
        _DAT_003fbaec = _DAT_003fbba4;
        _DAT_003fbaf0 = _DAT_003fbba8;
        _DAT_003fff9c = _DAT_003fbbac;
        DAT_003fbb98 = 1;
        _DAT_003fffcc = _DAT_003fffcc & 2;
        DAT_003fffa3 = *(undefined *)(_DAT_003fbb8c + (uint)DAT_003fbb90 * 0x14);
        iVar3 = _DAT_003fbb8c + (uint)DAT_003fbb90 * 0x14;
        DAT_003fffa4 = *(undefined *)(iVar3 + 1);
        _DAT_003fbaa4 = *(undefined4 **)(iVar3 + 0x10);
        _8(*(undefined *)(iVar3 + 8));
        (**(code **)(_DAT_003fbb8c + (uint)DAT_003fbb90 * 0x14 + 0xc))();
        FUN_0010b178(*_DAT_003fbaa4,_DAT_003fbaa4[1],*(undefined *)(_DAT_003fbaa4 + 2));
        return 2;
      }
    }
  }
  else {
    _DAT_003fffcc = 0;
  }
                    /* WARNING: Read-only address (ram,0x003fbba4) is written */
                    /* WARNING: Read-only address (ram,0x003fbba8) is written */
  return 0;
}

