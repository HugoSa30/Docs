/*
 * Program: n42.bin
 * Function: FUN_001a81c0
 * Entry: 001a81c0
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_001a81c0(void)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = 0;
  if (_DAT_003fbbb4 < 3) {
    if (_DAT_003fbbb4 == 2) {
      FUN_00122d74();
      iVar4 = FUN_0010dd00(_DAT_003fbbcc);
      if (iVar4 == 0) {
        _DAT_003fbbb4 = 0;
        return 0;
      }
      _4(*_DAT_003fba9c,&DAT_003fbbc0);
      _DAT_003fbaec = _DAT_003fbbc0;
      _DAT_003fbaf0 = _DAT_003fbbc4;
      _DAT_003fff9c = _DAT_003fbbc8;
      _DAT_003fbab0 = 0xfa85f4;
      DAT_003fbb98 = 1;
      _DAT_003fbb10 = 0xfa86c4;
      _DAT_003fbb14 = 0xfa86d4;
      _DAT_003fbb18 = 0xfa87c4;
      FUN_00108320(*_DAT_003fba9c,&DAT_003fbb10);
      FUN_00109630(*_DAT_003fba9c,&DAT_003fbbb8,1);
      _DAT_003fbbb4 = 3;
      return 1;
    }
    if (_DAT_003fbbb4 == 0) {
      _DAT_003fbbcc = *(undefined4 **)(_DAT_003fbb84 + 0xc);
      _DAT_003fbbc8 = FUN_00108000(*_DAT_003fbbcc,_DAT_003fbbcc[3],&DAT_003fbbc0);
      iVar4 = FUN_0010e334(_DAT_003fbbcc[3],_DAT_003fbbc8,*(undefined2 *)(_DAT_003fbbcc + 4));
      if (iVar4 != 0) {
        _DAT_003fbbb4 = 1;
        FUN_001091a4(*_DAT_003fbbcc,*_DAT_003fbbb0,1);
        return 0;
      }
      return 0;
    }
    if (_DAT_003fbbb4 == 1) {
      return 0;
    }
  }
  else {
    if (_DAT_003fbbb4 == 3) {
      return 1;
    }
    if (_DAT_003fbbb4 == 4) {
      DAT_003fbd5b = 1;
      DAT_003fbb90 = 0;
      bVar2 = false;
      if (*(char *)(_DAT_003fbb84 + 8) != '\0') {
        do {
          iVar4 = (**(code **)(*(int *)(_DAT_003fbb8c + (uint)DAT_003fbb90 * 0x14 + 0x10) + 0x14))
                            (&UNK_003fffa8,_DAT_003fbbba);
          if (iVar4 == 0) {
LAB_001a8584:
            iVar4 = 1;
          }
          else if (DAT_003fffb1 == *(char *)(_DAT_003fbd48 + 2)) {
            iVar4 = 0;
          }
          else {
            cVar1 = *(char *)(_DAT_003fbb8c + (uint)DAT_003fbb90 * 0x14);
            if (((DAT_003fffb1 == cVar1) ||
                ((*(char *)(_DAT_003fbd48 + 2) == cVar1 &&
                 (iVar4 = FUN_0010b1e0(DAT_003fffb1), iVar4 != 0)))) &&
               (iVar4 = (**(code **)(_DAT_003fbb8c + (uint)DAT_003fbb90 * 0x14 + 4))(), iVar4 != 0))
            {
              iVar4 = _DAT_003fbb8c + (uint)DAT_003fbb90 * 0x14;
              DAT_003fbd5d = *(undefined *)(iVar4 + 1);
              iVar4 = (**(code **)(*(int *)(iVar4 + 0x10) + 0x1c))(&UNK_003fffa8);
              if (iVar4 == 0) {
                iVar4 = 0;
              }
              else {
                DAT_003fbd5a = 1;
                bVar2 = true;
                if ((uint)_DAT_003fbbba < (uint)DAT_003fffb4 + (uint)DAT_003fffb5 + 1)
                goto LAB_001a8584;
                cVar1 = *(char *)(_DAT_003fffac + (uint)DAT_003fffb4);
                if (((cVar1 == -0x7f) || (cVar1 == -0x60)) &&
                   (uVar3 = (**(code **)(*(int *)(_DAT_003fbb8c + (uint)DAT_003fbb90 * 0x14 + 0x10)
                                        + 0x24))(_DAT_003fffac,_DAT_003fbbba + 0xffff & 0xffff),
                   uVar3 == *(byte *)(_DAT_003fffac + (uint)DAT_003fffb4 + (uint)DAT_003fffb5))) {
                  DAT_003fbd59 = 1;
                  DAT_003fbd5b = 0;
                  _DAT_003fbd54 = _DAT_003fffb8;
                  DAT_003fbd58 = DAT_003fffb5;
                  FUN_0010dc28();
                  FUN_0010b220(DAT_003fffb1,DAT_003fffb2);
                  iVar4 = 2;
                }
                else {
                  iVar4 = 0;
                }
              }
            }
            else {
              iVar4 = 0;
            }
          }
          DAT_003fbb90 = DAT_003fbb90 + 1;
        } while ((DAT_003fbb90 < *(byte *)(_DAT_003fbb84 + 8)) && (!bVar2));
      }
      if (iVar4 != 1) {
        DAT_003fbb90 = DAT_003fbb90 - 1;
        _DAT_003fbbb4 = 0;
        return iVar4;
      }
      DAT_003fbb90 = DAT_003fbb90 - 1;
      return 1;
    }
  }
  _DAT_003fbbb4 = 0;
                    /* WARNING: Read-only address (ram,0x003fbbc0) is written */
                    /* WARNING: Read-only address (ram,0x003fbbc4) is written */
                    /* WARNING: Read-only address (ram,0x003fffb4) is written */
  return 0;
}

