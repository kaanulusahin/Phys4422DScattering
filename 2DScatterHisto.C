{
  c1 = new TCanvas("c1", "2-D Scattering Raw Data Histogram", 800, 600);

  h = new TH1F("h","Number of Strikes at Given Scattering Angles",17,10,350);

  //filling the histogram
  for(int i = 0; i<42; i++){
    h->Fill(20);
  }
  for(int i = 0; i<23; i++){
    h->Fill(40);
  }
  for(int i = 0; i<31; i++){
    h->Fill(60);
  }
  for(int i = 0; i<50; i++){
    h->Fill(80);
  }
  for(int i = 0; i<55; i++){
    h->Fill(100);
  }
  for(int i = 0; i<31; i++){
    h->Fill(120);
  }
  for(int i = 0; i<56; i++){
    h->Fill(140);
  }
  for(int i = 0; i<77; i++){
    h->Fill(160);
  }
  for(int i = 0; i<41; i++){
    h->Fill(180);
  }
  for(int i = 0; i<76; i++){
    h->Fill(200);
  }
  for(int i = 0; i<66; i++){
    h->Fill(220);
  }
  for(int i = 0; i<54; i++){
    h->Fill(240);
  }
  for(int i = 0; i<48; i++){
    h->Fill(260);
  }
  for(int i = 0; i<30; i++){
    h->Fill(280);
  }
  for(int i = 0; i<28; i++){
    h->Fill(300);
  }
  for(int i = 0; i<21; i++){
    h->Fill(320);
  }
  for(int i = 0; i<6; i++){
    h->Fill(340);
  }

  h->SetXTitle("Scattering Angle");
  h->SetYTitle("Number of Strikes");
  h->Draw();
}
