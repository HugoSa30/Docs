/*
 * Program: n42.bin
 * Function: FUN_001e5034
 * Entry: 001e5034
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_001e5034(byte *param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  uint uVar2;
  char cVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  
  FUN_001e2e0c();
  _DAT_003fb85c = (code *)0x0;
  if ((DAT_00fe1800 & param_1[0x17]) == DAT_00fe1800) {
    bVar1 = param_1[0x16];
    uVar6 = (uint)bVar1;
    if (uVar6 != 0xf4) {
      _DAT_003fb800 = &DAT_003fb7fc;
    }
    pbVar4 = &DAT_00fe5bfc;
    iVar5 = 4;
    do {
      if ((*pbVar4 == uVar6) && ((_DAT_003fb854 & *(uint *)(pbVar4 + 1)) != 0)) {
        _DAT_003fb85c = *(code **)(pbVar4 + 5);
        break;
      }
      pbVar4 = pbVar4 + 9;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    if (_DAT_003fb85c == (code *)0x0) {
      if ((((DAT_003f9800 == uVar6) &&
           ((uint)DAT_003f9801 == ((uint)(bVar1 >> 4) | uVar6 << 4 & 0xff))) &&
          (uVar2 = (uVar6 & 3) << 6, (uint)DAT_003f9802 == (bVar1 >> 2 | uVar2))) &&
         ((uint)DAT_003f9803 ==
          (uVar6 + ((uint)(bVar1 >> 4) | uVar6 << 4) + (bVar1 >> 2 | uVar2) & 0xff))) {
        while (DAT_003fb8c0 != '\0') {
          FUN_001e2f2c(&DAT_003fb9b1,&DAT_003fbac5,0);
        }
        iVar5 = FUN_001e5c50(0xfafce69c,&DAT_003f9800,&DAT_003fb7fc);
        if (iVar5 == -0x8154712) {
          _DAT_003fb85c = _DAT_003f9804;
          _DAT_003fb858 = 2;
          if ((*param_1 >> 3 & 1) == 1) {
            if (DAT_003fbac5 != '\0') {
              DAT_003fbac5 = 0;
              DAT_003fb9b1 = 0;
              DAT_003fb8bf = '\b';
              FUN_001e2f2c(&DAT_003fb9b1,&DAT_003fbac5,1);
              DAT_003fbac5 = '\x01';
              DAT_003fb9b1 = 1;
            }
            cVar3 = (*_DAT_003fb85c)(param_1,param_2,param_3);
            if (cVar3 != '\x01') {
              _DAT_003fb85c = (code *)0x0;
            }
            if (DAT_003fbac5 != '\0') {
              DAT_003fb9b1 = 0;
              DAT_003fbac5 = 1;
              FUN_001e2f2c(&DAT_003fb9b1,&DAT_003fbac5,1);
              while (DAT_003fb8be == '\x04') {
                FUN_001e2f2c(&DAT_003fb9b1,&DAT_003fbac5,1);
              }
              DAT_003fbac5 = 0;
              DAT_003fb9b1 = 0;
              DAT_003fb8bf = 7;
              FUN_001e2f2c(&DAT_003fb9b1,&DAT_003fbac5,1);
              DAT_003fb9b1 = 1;
              DAT_003fbac5 = '\x01';
              DAT_003fb8bf = DAT_003fb8be;
              while (DAT_003fb8bf != '\0') {
                FUN_001e2f2c(&DAT_003fb9b1,&DAT_003fbac5,1);
              }
            }
          }
          else {
            DAT_003fbad7 = 0x33;
            DAT_003fbac2 = 2;
            DAT_003fbac0 = DAT_003fbac0 | 4;
          }
        }
      }
    }
    else {
      if (((*(uint *)(&DAT_00fe5bfd + (4 - iVar5) * 9) & 0x40) != 0) && ((*param_1 >> 3 & 1) == 0))
      {
        DAT_003fbad7 = 0x33;
        DAT_003fbac2 = 2;
        DAT_003fbac0 = DAT_003fbac0 | 4;
      }
      cVar3 = (*_DAT_003fb85c)(param_1,param_2,param_3);
      if (cVar3 != '\x01') {
        _DAT_003fb85c = (code *)0x0;
      }
    }
  }
  FUN_001e2e0c();
  return _DAT_003fb85c != (code *)0x0;
}

