<div class="offset-md-5 text-center">
    <form  action="recebe_agendamento.php" method="POST" >
    <div class="form-group col-md-3 text-center">
        <label id="nome">Nome</label>
        <input type="text" name="nome" id="nome" class="form-control col-12 offset-1" >
    </div>
    <div class="form-group col-md-3">
        <label >Email</label>
    <input type="email" class="form-control col-12 offset-1 "name="email" id="email" >
    </div>
    <div class="form-group col-md-3">
        <label >Telefone</label>
    <input type="text" class="form-control col-12 offset-1"name="tel" id="tel" placeholder="(00)0000-00000" max="11">
    </div>
    <div class="form-group col-md-3">
        <label >Data</label>
    <input  type="date" name="data" id="data" class="form-control col-12 offset-1" >
    </div>
    <div class="form-group col-md-3">
        <label >Hora</label>
    <input type="time" name="hora" id="hora" class="form-control col-12 offset-1" min="09:00" max="19:00" >
    </div>
    <div class="from group col-md-3">
        <button type="submit" class="btn btn-primary">Enviar</button>
    </dv>
    </form>   
</div>   