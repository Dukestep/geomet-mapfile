CLASS
 NAME "0.005 0.05"
 GROUP "ICECONTENTSOIL-LINEAR"
 EXPRESSION ([pixel] >= 0.005 AND [pixel] < 0.05)
 STYLE
  COLORRANGE 254 203 0 255 255 0
  DATARANGE 0.005 0.05
 END
END

CLASS
 NAME "0.05 0.10"
 GROUP "ICECONTENTSOIL-LINEAR"
 EXPRESSION ([pixel] >= 0.05 AND [pixel] < 0.10)
 STYLE
  COLORRANGE 255 255 0 204 254 50
  DATARANGE 0.05 0.10
 END
END

CLASS
 NAME "0.10 0.15"
 GROUP "ICECONTENTSOIL-LINEAR"
 EXPRESSION ([pixel] >= 0.10 AND [pixel] < 0.15)
 STYLE
  COLORRANGE 204 254 50 153 254 101
  DATARANGE 0.10 0.15
 END
END

CLASS
 NAME "0.15 0.20"
 GROUP "ICECONTENTSOIL-LINEAR"
 EXPRESSION ([pixel] >= 0.15 AND [pixel] < 0.20)
 STYLE
  COLORRANGE 153 254 101 102 253 152
  DATARANGE 0.15 0.20
 END
END

CLASS
 NAME "0.20 0.25"
 GROUP "ICECONTENTSOIL-LINEAR"
 EXPRESSION ([pixel] >= 0.20 AND [pixel] < 0.25)
 STYLE
  COLORRANGE 102 253 152 51 253 203
  DATARANGE 0.20 0.25
 END
END

CLASS
 NAME "0.25 0.30"
 GROUP "ICECONTENTSOIL-LINEAR"
 EXPRESSION ([pixel] >= 0.25 AND [pixel] < 0.30)
 STYLE
  COLORRANGE 51 253 203 0 253 255
  DATARANGE 0.25 0.30
 END
END

CLASS
 NAME "0.30 0.35"
 GROUP "ICECONTENTSOIL-LINEAR"
 EXPRESSION ([pixel] >= 0.30 AND [pixel] < 0.35)
 STYLE
  COLORRANGE 0 253 255 0 189 254
  DATARANGE 0.30 0.35
 END
END

CLASS
 NAME "0.35 0.40"
 GROUP "ICECONTENTSOIL-LINEAR"
 EXPRESSION ([pixel] >= 0.35 AND [pixel] < 0.40)
 STYLE
  COLORRANGE 0 189 254 0 126 254
  DATARANGE 0.35 0.40
 END
END

CLASS
 NAME "0.40 0.45"
 GROUP "ICECONTENTSOIL-LINEAR"
 EXPRESSION ([pixel] >= 0.40 AND [pixel] < 0.45)
 STYLE
  COLORRANGE 0 126 254 0 63 254
  DATARANGE 0.40 0.45
 END
END

CLASS
 NAME "0.45 0.50"
 GROUP "ICECONTENTSOIL-LINEAR"
 EXPRESSION ([pixel] >= 0.45 AND [pixel] < 0.50)
 STYLE
  COLORRANGE 0 63 254 0 0 254
  DATARANGE 0.45 0.50
 END
END

CLASS
 NAME "0.50 0.55"
 GROUP "ICECONTENTSOIL-LINEAR"
 EXPRESSION ([pixel] >= 0.50 AND [pixel] < 0.55)
 STYLE
  COLORRANGE 0 0 254 0 0 211
  DATARANGE 0.50 0.55
 END
END

CLASS
 NAME "0.55 0.60"
 GROUP "ICECONTENTSOIL-LINEAR"
 EXPRESSION ([pixel] >= 0.55 AND [pixel] < 0.60)
 STYLE
  COLORRANGE 0 0 211 0 0 169
  DATARANGE 0.55 0.60
 END
END

CLASS
 NAME "0.60 .."
 GROUP "ICECONTENTSOIL-LINEAR"
 EXPRESSION ([pixel] >= 0.60 AND [pixel] < 0.99)
 STYLE
  COLORRANGE 0 0 169 0 0 127
  DATARANGE 0.60 0.99
 END
END