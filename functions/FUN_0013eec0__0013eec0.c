/*
 * Program: n42.bin
 * Function: FUN_0013eec0
 * Entry: 0013eec0
 * Exported by: ExportAllDecompiledFunctions.java
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0013eec0(void)

{
  bool bVar1;
  char cVar3;
  short sVar2;
  ushort uVar4;
  int iVar5;
  ushort uVar7;
  uint uVar6;
  uint uVar8;
  
  DAT_005b89da = DAT_005b89da & 0xfcff;
  DAT_005b89eb = DAT_003fddae & 0xf;
  if ((DAT_003fddae >> 5 & 1) == 0) {
    DAT_005b89da = DAT_005b89da | 0x200;
    goto LAB_0013f124;
  }
  if (DAT_005b89eb < 5) {
    if (DAT_005b89eb == 4) {
      DAT_005b89da = DAT_005b89da | 0x100;
      goto LAB_0013f124;
    }
    if (DAT_005b89eb == 1) {
      if ((((DAT_003fbe9b != '\0') && (tmot <= DAT_001c846b)) && (tumg <= DAT_001c846c)) &&
         (DAT_005b89e9 != '\x02')) {
        DAT_005b89e8 = DAT_001d1a27;
        DAT_005b89e9 = 1;
        DAT_005b89ec = 0;
        DAT_005b89ed = DAT_005b89ed | 1;
        return;
      }
      if (DAT_005b89e9 != '\x01') {
        DAT_005b89e8 = 0;
        DAT_005b89ec = 0;
        DAT_005b89ed = DAT_005b89ed & 0xfe;
        return;
      }
      DAT_005b89e8 = 0;
      DAT_005b89e9 = 2;
      DAT_005b89ec = 0;
      DAT_005b89ed = DAT_005b89ed & 0xfe;
      return;
    }
    if (DAT_005b89eb == 2) {
      if (((DAT_003fbebb != '\0') && (tmot <= DAT_001c846b)) &&
         ((tumg <= DAT_001c846c && (DAT_005b89e9 != '\x02')))) {
        DAT_005b89e8 = DAT_001d1a27;
        DAT_005b89e9 = 1;
        DAT_005b89ec = 0;
        DAT_005b89ed = DAT_005b89ed | 1;
        return;
      }
      if (DAT_005b89e9 != '\x01') {
        DAT_005b89e8 = 0;
        DAT_005b89ec = 0;
        DAT_005b89ed = DAT_005b89ed & 0xfe;
        return;
      }
      DAT_005b89e8 = 0;
      DAT_005b89e9 = 2;
      DAT_005b89ec = 0;
      DAT_005b89ed = DAT_005b89ed & 0xfe;
      return;
    }
    if (DAT_005b89eb == 3) {
      DAT_003fddae = DAT_003fddae & ~DAT_003fddaf;
      return;
    }
  }
  else {
    if (DAT_005b89eb == 5) {
      DAT_005b89da = DAT_005b89da | 0x100;
      goto LAB_0013f124;
    }
    if (DAT_005b89eb == 6) {
      DAT_005b89da = DAT_005b89da | 0x100;
      goto LAB_0013f124;
    }
  }
  DAT_005b89da = DAT_005b89da | 0x200;
LAB_0013f124:
  if ((DAT_005b89da & 0x200) == 0) {
    if ((DAT_005b89da & 0x100) != 0) {
      if (((DAT_003fc187 == '\0') && (DAT_003fbe9b == '\0')) && (DAT_003fbebb == '\0')) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if ((bVar1) && (DAT_005b89ec == 0)) {
        DAT_005b89dc = 0;
      }
      else {
        DAT_003fb31f = func_0xff221e78(&UNK_003fb320,B_stend,DAT_001c8465);
        if (DAT_003fb31f == '\0') {
          DAT_005b89da = DAT_005b89da | 0x10;
        }
        else {
          DAT_005b89da = DAT_005b89da & 0xffef;
        }
        DAT_003fb31c = func_0xff221e78(&UNK_003fb31d,B_genoff,DAT_001c8462);
        if (DAT_003fb31c == '\0') {
          DAT_005b89da = DAT_005b89da & 0xfffd;
        }
        else {
          DAT_005b89da = DAT_005b89da | 2;
        }
        DAT_005b89f3 = tumg;
        if ((DAT_005b89da & 0x400) != 0) {
          DAT_005b89f3 = DAT_005b89f5;
        }
        DAT_005b89f4 = func_0xff2187cc(&DAT_001c8434,DAT_005b89f3);
        uVar4 = ((ushort)DAT_005b89f4 - (ushort)DAT_001c8468) + 0x40;
        if ((short)uVar4 < 0) {
          uVar4 = 0;
        }
        else if (0xff < (short)uVar4) {
          uVar4 = 0xff;
        }
        cVar3 = func_0xff22214c(&UNK_003fb328,tmot,uVar4 & 0xff,DAT_005b89f4);
        if (cVar3 == '\0') {
          DAT_005b89da = DAT_005b89da & 0xfffe;
        }
        else {
          DAT_005b89da = DAT_005b89da | 1;
        }
        uVar4 = (((ushort)DAT_005b8b78 - (ushort)DAT_001c8469) - (ushort)DAT_001c846a) + 0x80;
        if ((short)uVar4 < 0) {
          uVar4 = 0;
        }
        uVar7 = ((ushort)DAT_005b8b78 - (ushort)DAT_001c8469) + 0x40;
        if ((short)uVar7 < 0) {
          uVar7 = 0;
        }
        cVar3 = func_0xff22214c(&UNK_003fb325,tmot,uVar4 & 0xff,uVar7 & 0xff);
        if (cVar3 == '\0') {
          DAT_005b89da = DAT_005b89da & 0xff7f;
        }
        else {
          DAT_005b89da = DAT_005b89da | 0x80;
        }
        cVar3 = func_0xff22214c(&UNK_003fb32d,ub,DAT_001c8467,DAT_001c8466);
        if (cVar3 == '\0') {
          DAT_005b89da = DAT_005b89da | 4;
        }
        else {
          DAT_005b89da = DAT_005b89da & 0xfffb;
        }
        cVar3 = func_0xff22214c(&UNK_003fb31e,nmot,DAT_001c845f,DAT_001c845d);
        if (cVar3 == '\0') {
          DAT_005b89da = DAT_005b89da | 8;
        }
        else {
          DAT_005b89da = DAT_005b89da & 0xfff7;
        }
        if (((B_genfbsd == 0) && ((DAT_003fdfc7 & 1) == 0)) && ((DAT_003fdfc1 & 1) == 0)) {
          DAT_005b89da = DAT_005b89da & 0xffdf;
        }
        else {
          DAT_005b89da = DAT_005b89da | 0x20;
        }
        if (bVar1) {
          DAT_005b89da = DAT_005b89da | 0x40;
        }
        else {
          DAT_005b89da = DAT_005b89da & 0xffbf;
        }
        if ((((((DAT_005b89da & 1) == 0) && ((DAT_005b89da & 0x80) == 0)) &&
             (((DAT_005b89da & 2) == 0 && (((DAT_005b89da & 4) == 0 && ((DAT_005b89da & 8) == 0)))))
             ) && ((DAT_005b89da & 0x10) == 0)) &&
           (((DAT_005b89da & 0x20) == 0 && ((DAT_005b89da & 0x40) == 0)))) {
          DAT_005b89da = DAT_005b89da | 0x400;
        }
        else {
          DAT_005b89da = DAT_005b89da & 0xfbff;
        }
        if ((DAT_005b89da & 0x400) == 0) {
          DAT_005b89ed = DAT_005b89ed & 0xfd;
        }
        else {
          DAT_005b89ed = DAT_005b89ed | 2;
        }
        if (((DAT_005b89da & 0x400) == 0) || (DAT_003fb319 != '\0')) {
          DAT_003fb318 = '\0';
        }
        else {
          DAT_003fb318 = '\x01';
        }
        DAT_003fb319 = '\x01' - ((DAT_005b89da & 0x400) == 0);
        if (DAT_003fb318 != '\0') {
          DAT_005b89f5 = tumg;
        }
        DAT_005b89f2 = func_0xff2187cc(&DAT_001c841c,nmot);
        func_0xff2226a0(&DAT_003fb31a,DAT_005b89f2,DAT_001c8463);
        DAT_005b89ef = (byte)((ushort)_DAT_003fb31a >> 8);
        func_0xff2226a0(&DAT_003fb326,dffgen,DAT_001c8464);
        DAT_005b89ee = (undefined)(_DAT_003fb326 >> 8);
        DAT_005b89e6 = (ushort)DAT_005b89ef - (_DAT_003fb326 >> 8);
        if (DAT_005b89e6 < 1) {
          iVar5 = -(int)DAT_005b89e6;
        }
        else {
          iVar5 = (int)DAT_005b89e6;
        }
        if (iVar5 < _DAT_001c8452) {
          DAT_005b89f0 = '\x03';
        }
        else if (DAT_005b89e6 < 1) {
          DAT_005b89f0 = '\x01';
        }
        else {
          DAT_005b89f0 = '\x02';
        }
        if (DAT_005b89f0 == '\x01') {
          uVar8 = (uint)_DAT_001c844e;
        }
        else if (DAT_005b89f0 == '\x02') {
          uVar8 = (uint)_DAT_001c8450;
        }
        else {
          uVar8 = (uint)_DAT_001c844c;
        }
        DAT_005b89de = (undefined2)uVar8;
        if (DAT_005b89e6 < 1) {
          iVar5 = -(int)DAT_005b89e6;
        }
        else {
          iVar5 = (int)DAT_005b89e6;
        }
        if (iVar5 < _DAT_001c845a) {
          DAT_005b89f1 = '\x03';
        }
        else if (DAT_005b89e6 < 1) {
          DAT_005b89f1 = '\x01';
        }
        else {
          DAT_005b89f1 = '\x02';
        }
        if (DAT_005b89f1 == '\x01') {
          uVar6 = (uint)_DAT_001c8456;
        }
        else if (DAT_005b89f1 == '\x02') {
          uVar6 = (uint)_DAT_001c8458;
        }
        else {
          uVar6 = (uint)_DAT_001c8454;
        }
        DAT_005b89e0 = (undefined2)uVar6;
        DAT_005b89dc = (short)((int)(((int)((int)DAT_005b89e6 * uVar8) >> 1) * (uint)_DAT_001c844a)
                              / 500000) + DAT_005b89dc;
        if (DAT_005b89dc < -0xff) {
          DAT_005b89dc = -0xff;
        }
        else if (0xff < DAT_005b89dc) {
          DAT_005b89dc = 0xff;
        }
        DAT_005b89e2 = (short)((int)((int)DAT_005b89e6 * uVar6) / 1000);
        DAT_005b89e4 = DAT_005b89e2 + DAT_005b89dc;
        sVar2 = DAT_005b89e4;
        if ((DAT_005b89da & 0x400) == 0) {
          sVar2 = 0;
        }
        sVar2 = func_0xff222250((int)(short)(ushort)DAT_005b89ec - (int)(short)(ushort)DAT_001c845e,
                                (int)sVar2,(uint)DAT_005b89ec + (uint)DAT_001c8461);
        sVar2 = func_0xff222250(0,(int)sVar2,DAT_001c8460);
        if (sVar2 < 0) {
          sVar2 = 0;
        }
        else if (0xfe < sVar2) {
          sVar2 = 0xfe;
        }
        DAT_005b89ec = (byte)sVar2;
        DAT_005b89ed = DAT_005b89ed & 0xfe;
        DAT_005b89e8 = DAT_001d1a26;
        if ((DAT_005b89da & 0x400) == 0) {
          DAT_005b89e8 = 0;
        }
      }
    }
  }
  else if (DAT_005b89ea == 0) {
    if ((DAT_003fddae & 0xf) == 0) {
      DAT_005b89ea = DAT_001c845c;
    }
    else {
      DAT_003fddae = DAT_003fddae | 0x20;
      DAT_003fddaf = ~DAT_003fddae;
    }
  }
  else {
    if ((short)(DAT_005b89ea - 1) < 0) {
      DAT_005b89ea = 0;
    }
    else {
      DAT_005b89ea = (byte)(DAT_005b89ea - 1);
    }
    if (DAT_003fc19e == '\0') {
      DAT_003fb329 = DAT_003fbebb != DAT_003fb32a;
      DAT_003fb32a = DAT_003fbebb;
      DAT_003fb321 = B_ac != DAT_003fb322;
      DAT_003fb322 = B_ac;
      DAT_003fb32b = B_ko != DAT_003fb32c;
      DAT_003fb32c = B_ko;
      if ((((bool)DAT_003fb321) || ((bool)DAT_003fb32b)) || ((bool)DAT_003fb329)) {
        DAT_003fddae = 2;
      }
      else {
        DAT_003fb323 = DAT_003fbe9b != DAT_003fb324;
        DAT_003fb324 = DAT_003fbe9b;
        if ((bool)DAT_003fb323) {
          DAT_003fddae = 1;
        }
      }
    }
    else {
      DAT_003fddae = DAT_003fddae | 0x24;
      DAT_003fddaf = ~DAT_003fddae;
    }
  }
                    /* WARNING: Read-only address (ram,0x003fdfc1) is written */
                    /* WARNING: Read-only address (ram,0x003fdfc7) is written */
  return;
}

