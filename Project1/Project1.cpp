pygame'i içe aktar
ithalat  zamanı
rastgele içe aktar

pygame.başlangıç ​​()

beyaz = (255, 255, 255)
sarı = (255, 255, 102)
siyah = (0, 0, 0)
kırmızı = (213, 50, 80)
yeşil = (0, 255, 0)
mavi = (50, 153, 213)

dis_width = 600
dis_yükseklik = 400

dis = pygame.göster.set_mode((dis_width, dis_height))
pygame.göster.set_caption('Edureka'dan Yılan Oyunu' )

    saat = pygame.zaman.Saat()

    yılan_blok = 10
    yılan_hızı = 15

    font_style = pygame.yazı tipi.SysFont("bahnschrift", 25)
    skor_font = pygame.yazı tipi.SysFont("çizgi roman", 35)


    def  Your_score(puan) :
    değer = puan_yazı tipi.render("Puanınız:" + str(puan), True, sarı)
    dis.blit(değer, [0, 0])



    def  our_snake(snake_block, snake_list) :
    yılan_listesindeki x  için : _
    pygame.çiz.rect(dis, siyah, [x[0], x[1], snake_block, snake_block])


    def  mesajı(mesaj, renk) :
    mesaj = yazı tipi stili.render(msg, True, color)
    dis.blit(mesg, [dis_width / 6, dis_height / 3])


    def  gameLoop() :
    game_over = Yanlış
    game_close = Yanlış

    x1 = dis_width / 2
    y1 = dis_yükseklik / 2

    x1_değişim = 0
    y1_değişim = 0

    yılan_Listesi = []
    Uzunluk_yılan = 1

    foodx = yuvarlak(rastgele.randrange(0, dis_width - snake_block) / 10.0) * 10.0
    foody = yuvarlak(rastgele.randrange(0, dis_height - snake_block) / 10.0) * 10.0

    game_over değilken : _

    while  game_close == Doğru :
        dis.doldurmak(mavi)
        mesaj("Kaybettiniz! C-Play Again veya Q-Quit'e basın", kırmızı)
        Skorunuz(Uzunluk_yılan - 1)
        pygame.göster.güncelleme()

        pygame'deki olay  için . _  olay . almak ():
        eğer  olay.type == pygame.TUŞ TUŞU :
eğer  olay.anahtar == pygame.K_q :
    game_over = Doğru
    game_close = Yanlış
    eğer  olay.anahtar == pygame.K_c :
    oyun Döngüsü()

    pygame'deki olay  için . _  olay . almak ():
    eğer  olay.type == pygame.ÇIK :
    game_over = Doğru
    eğer  olay.type == pygame.TUŞ TUŞU :
eğer  olay.anahtar == pygame.K_LEFT :
    x1_change = -snake_block
    y1_değişim = 0
    elif  olayı.anahtar == pygame.K_SAĞ :
    x1_change = snake_block
    y1_değişim = 0
    elif  olayı.anahtar == pygame.K_UP :
    y1_change = -snake_block
    x1_değişim = 0
    elif  olayı.anahtar == pygame.K_DOWN :
    y1_change = yılan_block
    x1_değişim = 0

    x1 >= dis_width  veya x1 < 0 veya  y1 >= dis_height veya y1 < 0 ise :
    game_close = Doğru
    x1 += x1_değişim
    y1 += y1_değişim
    dis.doldurmak(mavi)
    pygame.çiz.rect(dis, green, [foodx, foody, snake_block, snake_block])
    yılan_Head = []
    yılan_Kafa.ekle(x1)
    yılan_Kafa.ekle(y1)
    yılan_Listesi.ekle(snake_Head)
    if  len(snake_List) >  Length_of_snake :
del  snake_List[0]

yılan_Listesindeki x  için[: -1] :
    eğer  x == snake_Head :
    game_close = Doğru

    our_snake(snake_block, snake_List)
    Skorunuz(Uzunluk_yılan - 1)

    pygame.göster.güncelleme()

    x1 == foodx  ve  y1 == foody ise :
foodx = yuvarlak(rastgele.randrange(0, dis_width - snake_block) / 10.0) * 10.0
foody = yuvarlak(rastgele.randrange(0, dis_height - snake_block) / 10.0) * 10.0
length_of_snake += 1

saat.kene(snake_speed)

pygame.bırak()
bırak()


oyun Döngüsü()
Oyun dynamic_cast