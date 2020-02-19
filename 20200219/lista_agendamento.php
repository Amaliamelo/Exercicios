<!DOCTYPE html>
  <head>
    <meta charset="utf-8">
    <title>BarbeariaIFSP</title>
    <link rel="stylesheet" href="css/bootstrap.min.css">
    <link rel="stylesheet" type="text/css"  href="css/css.css"/>

  </head>
  <body >
    <div class="cover-container d-flex w-100 h-100 p-3 mx-auto flex-column">
  <header class="masthead mb-auto menu text-center">
    <div class="inner">
      <h3 class="masthead-brand">BarbeariaIFSP</h3>
      <nav class="nav nav-masthead justify-content-center">
        <a class="nav-link active" href="index.php">Home</a>
        <a class="nav-link" href="form_agendamento.php">Agendar</a>
        <a class="nav-link" href="lista_agendamento.php">Lista de Agendarmentos</a>
      </nav>
    </div>
  </header>
    <div class="text-center">
            <?php
                include "funcoes.inc";
                listar();
            ?> 
    </div>
    <footer class="footer fixed-bottom text-center">
      <div class="inner">by @AmaliaMelo.</p></div>
    </footer>
    
    <script src="js/jquery-3.2.1.min.js"></script>
		<script src="js/bootstrap.min.js"></script>
		<script src="js/validaform.min.js"></script>
</body>
</html>