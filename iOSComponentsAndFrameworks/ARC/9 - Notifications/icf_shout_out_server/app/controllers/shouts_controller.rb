class ShoutsController < ApplicationController
  # GET /shouts
  # GET /shouts.xml
  def index
    @shouts = Shout.all.sort_by(&:shout_date).reverse

    respond_to do |format|
      format.html # index.html.erb
      format.xml  { render :xml => @shouts }
    end
  end

  # GET /shouts/1
  # GET /shouts/1.xml
  def show
    @shout = Shout.find(params[:id])

    respond_to do |format|
      format.html # show.html.erb
      format.xml  { render :xml => @shout }
    end
  end

  # GET /shouts/new
  # GET /shouts/new.xml
  def new
    @shout = Shout.new

    respond_to do |format|
      format.html # new.html.erb
      format.xml  { render :xml => @shout }
    end
  end

  # GET /shouts/1/edit
  def edit
    @shout = Shout.find(params[:id])
  end

def sendPush (message)
  deviceList = Device.all
  
  deviceList.each do |sendItem|
    device = APN::Device.find_or_create_by_token(sendItem.token)
    notification = APN::Notification.new   
    notification.device = device   
    notification.badge = 1   
    notification.sound = "shout_out.caf"   
    notification.alert = message   
    notification.save
  end
end

  # POST /shouts
  # POST /shouts.xml
  def create
    @shout = Shout.new(params[:shout])

    sendPush (@shout.name + ' just shouted ' + @shout.shout_message)
    
    respond_to do |format|
      if @shout.save
        format.html { redirect_to(@shout, :notice => 'Shout was successfully created.') }
        format.xml  { render :xml => @shout, :status => :created, :location => @shout }
      else
        format.html { render :action => "new" }
        format.xml  { render :xml => @shout.errors, :status => :unprocessable_entity }
      end
    end
  end

  # PUT /shouts/1
  # PUT /shouts/1.xml
  def update
    @shout = Shout.find(params[:id])

    respond_to do |format|
      if @shout.update_attributes(params[:shout])
        format.html { redirect_to(@shout, :notice => 'Shout was successfully updated.') }
        format.xml  { head :ok }
      else
        format.html { render :action => "edit" }
        format.xml  { render :xml => @shout.errors, :status => :unprocessable_entity }
      end
    end
  end

  # DELETE /shouts/1
  # DELETE /shouts/1.xml
  def destroy
    @shout = Shout.find(params[:id])
    @shout.destroy

    respond_to do |format|
      format.html { redirect_to(shouts_url) }
      format.xml  { head :ok }
    end
  end
end
